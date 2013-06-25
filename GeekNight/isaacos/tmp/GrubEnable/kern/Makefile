OBJ=kernel
CC=gcc -Wall

all: $(OBJ) 

kernel: boot.o kernel.o screen.o lib.o gdt.o idt.o interrupt.o int.o pic.o syscalls.o mm.o printk.o process.o schedule.o sched.o 
	ld -Ttext=100000 --entry=_start $^ -o $@

int.o: int.asm 
	nasm -f elf -o $@ $^ 

sched.o: sched.asm
	nasm -f elf -o $@ $^ 

boot.o: boot.asm
	nasm -f elf -o $@ $^

.o: .c 
	$(CC) -c $^

clean:
	rm -f $(OBJ) *.o
