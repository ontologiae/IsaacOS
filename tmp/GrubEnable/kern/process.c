#include "lib.h"
#include "mm.h"

#define __PLIST__
#include "process.h"


void load_task(u32 * code_phys_addr, u32 * fn, unsigned int code_size)
{
	u32 page_base, kstack_base;
	u32 *pd;
	int i;

	/* Copie du code a l'adresse specifiee */
	memcpy((char *) code_phys_addr, (char *) fn, code_size);

	/* Reservation des pages dans le bitmap */
	page_base = (u32) code_phys_addr / PAGESIZE;
	for (i = 0; i < code_size / PAGESIZE; i++)
		set_page_frame_used(page_base + i);

	pd = pd_create(code_phys_addr, code_size);

	kstack_base = (u32) get_page_frame();
	if (kstack_base > 0x400000) {
		printk("not enough memory to create a kernel stack\n");
		return;
	}

	p_list[n_proc].pid = n_proc;
	p_list[n_proc].regs.ss = 0x33;
	p_list[n_proc].regs.esp = 0x40000FF0;
	p_list[n_proc].regs.eflags = 0x0;
	p_list[n_proc].regs.cs = 0x23;
	p_list[n_proc].regs.eip = 0x40000000;
	p_list[n_proc].regs.ds = 0x2B;
	p_list[n_proc].regs.es = 0x2B;
	p_list[n_proc].regs.fs = 0x2B;
	p_list[n_proc].regs.gs = 0x2B;
	p_list[n_proc].regs.cr3 = (u32) pd;

	p_list[n_proc].kstack.ss0 = 0x18;
	p_list[n_proc].kstack.esp0 = kstack_base + PAGESIZE - 16;

	p_list[n_proc].regs.eax = 0;
	p_list[n_proc].regs.ecx = 0;
	p_list[n_proc].regs.edx = 0;
	p_list[n_proc].regs.ebx = 0;

	p_list[n_proc].regs.ebp = 0;
	p_list[n_proc].regs.esi = 0;
	p_list[n_proc].regs.edi = 0;

	n_proc++;
}
