extern isr_default_int, isr_GP_exc, isr_PF_exc, isr_clock_int, isr_kbd_int, do_syscalls
global _asm_default_int, _asm_exc_GP, _asm_exc_PF, _asm_irq_0, _asm_irq_1, _asm_syscalls

%macro	SAVE_REGS 0
	pushad 
	push ds
	push es
	push fs
	push gs 
	push ebx
	mov bx,0x10
	mov ds,bx
	pop ebx
%endmacro

%macro	RESTORE_REGS 0
	pop gs
	pop fs
	pop es
	pop ds
	popad
%endmacro

_asm_default_int:
	SAVE_REGS
	call isr_default_int
	mov al,0x20
	out 0x20,al
	RESTORE_REGS
	iret

_asm_exc_GP:
	SAVE_REGS
	call isr_GP_exc
	RESTORE_REGS
	add esp,4
	iret

_asm_exc_PF:
	SAVE_REGS
	call isr_PF_exc
	RESTORE_REGS
	add esp,4
	iret

_asm_irq_0:
	SAVE_REGS
	call isr_clock_int
	mov al,0x20
	out 0x20,al
	RESTORE_REGS
	iret

_asm_irq_1:
	SAVE_REGS
	call isr_kbd_int
	mov al,0x20
	out 0x20,al
	RESTORE_REGS
	iret

_asm_syscalls:
	SAVE_REGS
	push eax                 ; transmission du numero d'appel
	call do_syscalls
	pop eax
	RESTORE_REGS
	iret

