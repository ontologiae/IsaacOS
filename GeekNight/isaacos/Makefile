TARGET = x86
OBJ=kernel
CC=gcc -Wall fno-stack-protector

kernel: boot.o startup.o link 
  
link: 
	ld -Ttext=100000 --entry=_start  boot.o startup.o -o IsaacKernel

boot.o: 
	nasm -f elf -o boot.o boot.asm

.o: .c 
	$(CC) -c $^



startup.o:
	lisaac startup.li --r -partial -no_os -target $(TARGET)
	gcc startup.c -o startup.o -c



image:
	sh mkimage.sh

updateimage:
	sudo mount /dev/loop3 ./HdIsaac
	sudo cp IsaacKernel ./HdIsaac/IsaacKernel
	sync
	sudo umount ./HdIsaac
	sudo sync


startup.sys: startup.li 

	lisaacos startup.li -target $(TARGET) 
#	rm startup.sys
	rm startup
	mv startup.eof startup.sys
	

boost: startup.li
	lisaac startup.li -target $(TARGET) -boost
	rm startup
	mv startup.eof startup.sys
	tool/script/dosemu c startup.sys .
	tool/script/dosemu e
	

emul: updateimage

	#tool/script/dosemu c startup.sys .
	#tool/script/dosemu e

debug: startup.c
	gcc -O2 -specs=/home/sonntag/svn/isaacos/trunk/isaacos/tool/gcc/x86/specs ./startup.c -o ./startup
	/home/sonntag/svn/isaacos/trunk/isaacos/tool/elf2eof/elf2eof -p 2048 ./startup -prepend /home/sonntag/svn/isaacos/trunk/isaacos/x86/bootloader/startup.com
	mv startup.eof startup.sys
	tool/script/dosemu c startup.sys .
	tool/script/dosemu e
clean:
	rm -rf *~
	rm -f  *.o
	rm startup.c
