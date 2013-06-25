#include "types.h"
#include "gdt.h"
#include "process.h"


void switch_to_task(int n, int mode)
{
	u32 kesp, eflags;
	u16 kss, ss, cs;

	current = &p_list[n];

	/* charger tss */
	default_tss.ss0 = current->kstack.ss0;
	default_tss.esp0 = current->kstack.esp0;

	/* 
	 * Empile les registres ss, esp, eflags, cs et eip necessaires a la
	 * commutation. Ensuite, la fonction do_switch() restaure les
	 * registres, la table de page du nouveau processus courant et commute
	 * avec l'instruction iret.
	 */
	ss = current->regs.ss;
	cs = current->regs.cs;
	eflags = (current->regs.eflags | 0x200) & 0xFFFFBFFF;

	if (mode == USERMODE) {
		kss = current->kstack.ss0;
		kesp = current->kstack.esp0;
	} else {		/*KERNELMODE */
		kss = current->regs.ss;
		kesp = current->regs.esp;
	}

	asm("	mov %0, %%ss; \
		mov %1, %%esp; \
		cmp %[KMODE], %[mode]; \
		je next; \
		push %2; \
		push %3; \
		next: \
		push %4; \
		push %5; \
		push %6; \
		push %7; \
		ljmp $0x08, $do_switch"
		:: \
		"m"(kss), \
		"m"(kesp), \
		"m"(ss), \
		"m"(current->regs.esp), \
		"m"(eflags), \
		"m"(cs), \
		"m"(current->regs.eip), \
		"m"(current), \
		[KMODE] "i"(KERNELMODE), \
		[mode] "g"(mode)
	    );
}

void schedule(void)
{
	struct process *p;
	u32 *stack_ptr;

	/* Stocke dans stack_ptr le pointeur vers les registres sauvegardes */
	asm("mov (%%ebp), %%eax; mov %%eax, %0": "=m"(stack_ptr) : );

	/* Si il n'y a pas de processus charge et qu'au moins un est pret, on le charge */
	if (current == 0 && n_proc) {
		switch_to_task(0, USERMODE);
	}
	/* 
	 * Si il y a un seul processus (qu'on laisse tourner) ou aucun
	 * processus, on retourne directement.
	 */
	else if (n_proc <= 1) {
		return;
	}
	/* Si il y a au moins deux processus, on commute vers le suivant */
	else if (n_proc > 1) {
		/* Sauver les registres du processus courant */
		current->regs.eflags = stack_ptr[16];
		current->regs.cs = stack_ptr[15];
		current->regs.eip = stack_ptr[14];
		current->regs.eax = stack_ptr[13];
		current->regs.ecx = stack_ptr[12];
		current->regs.edx = stack_ptr[11];
		current->regs.ebx = stack_ptr[10];
		current->regs.ebp = stack_ptr[8];
		current->regs.esi = stack_ptr[7];
		current->regs.edi = stack_ptr[6];
		current->regs.ds = stack_ptr[5];
		current->regs.es = stack_ptr[4];
		current->regs.fs = stack_ptr[3];
		current->regs.gs = stack_ptr[2];

		if (current->regs.cs != 0x08) {
			current->regs.esp = stack_ptr[17];
			current->regs.ss = stack_ptr[18];
		} else {	/* Interruption pendant un appel systeme */
			current->regs.esp = stack_ptr[9] + 12;
			current->regs.ss = default_tss.ss0;
		}

		/* Sauver le tss */
		current->kstack.ss0 = default_tss.ss0;
		current->kstack.esp0 = default_tss.esp0;

		/* Choix du nouveau processus (un simple roundrobin) */
		if (n_proc > current->pid + 1)
			p = &p_list[current->pid + 1];
		else
			p = &p_list[0];

		/* Commutation */
		if (p->regs.cs != 0x08)
			switch_to_task(p->pid, USERMODE);
		else
			switch_to_task(p->pid, KERNELMODE);
	}
}
