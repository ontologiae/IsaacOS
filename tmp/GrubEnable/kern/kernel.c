#include "types.h"
#include "lib.h"
#include "gdt.h"
#include "screen.h"
#include "io.h"
#include "idt.h"
#include "mm.h"
#include "process.h"
#include "boot.h"

void init_pic(void);


void ok_msg(void)
{
	kX = 60;
	kattr = 0x0A;
	printk("OK\n");
	kattr = 0x07;
}

void task1(void)
{
	char *msg = (char *) 0x40001000;
	int i;

	msg[0] = 't';
	msg[1] = 'a';
	msg[2] = 's';
	msg[3] = 'k';
	msg[4] = '1';
	msg[5] = '\n';
	msg[6] = 0;

	while (1) {
		asm("mov %0, %%ebx; mov $0x01, %%eax; int $0x30":: "m"(msg));
		for (i = 0; i < 10000; i++);
	}

	return;			/* never go there */
}

void task2(void)
{
	char *msg = (char *) 0x40001000;
	int i;

	msg[0] = 't';
	msg[1] = 'a';
	msg[2] = 's';
	msg[3] = 'k';
	msg[4] = '2';
	msg[5] = '\n';
	msg[6] = 0;

	while (1) {
		asm("mov %0, %%ebx; mov $0x01, %%eax; int $0x30":: "m"(msg));
		for (i = 0; i < 1000000; i++);
	}

	return;			/* never go there */
}

void kmain(struct multiboot_info *mbi)
{
	printk("Pepin is booting...\n");
	printk("RAM detected : %uk (lower), %uk (upper)\n", mbi->low_mem, mbi->high_mem);

	cli;

	/* Initialisation de la GDT et des segments */
	printk("Loading GDT");
	init_gdt();
	asm("   movw $0x18, %ax \n \
                movw %ax, %ss \n \
                movl $0x1FFF0, %esp");
	ok_msg();

	printk("Loading IDT");
	init_idt();
	ok_msg();

	printk("Configure PIC");
	init_pic();
	ok_msg();

	printk("Loading Task Register");
	asm("	movw $0x38, %ax; ltr %ax");
	ok_msg();

	printk("Enabling paging");
	init_mm(mbi->high_mem);
	ok_msg();

	load_task((u32 *) 0x200000, (u32 *) & task1, 0x2000);
	load_task((u32 *) 0x300000, (u32 *) & task2, 0x2000);

	kattr = 0x47;
	printk("Interrupts are enable. System is ready !\n\n");
	kattr = 0x07;
	hide_cursor();

	sti;

	while (1);
}
