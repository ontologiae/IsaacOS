#include "types.h"
#include "lib.h"
#include "io.h"

void do_syscalls(int sys_num)
{
	char *u_str;
	int i;

	if (sys_num == 1) {
		asm("mov %%ebx, %0": "=m"(u_str) :);
		for (i = 0; i < 100000; i++);	/* temporisation */
		cli;
		printk(u_str);
		sti;
	} else {
		printk("unknown syscall %d\n", sys_num);
	}

	return;
}
