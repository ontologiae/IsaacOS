/* Default linker script, for normal executables */
OUTPUT_FORMAT("elf32-littlearm", "elf32-bigarm",
	      "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(entry_isaac)
 SEARCH_DIR(/home/bsonntag/arm/lib);
SECTIONS
{  
  . = 0xA0008100;
  .text           :
  {     
    ../tool/gcc/ipaq/entry_isaac.o
    ../tool/gcc/ipaq/_divsi3.o
    ../tool/gcc/ipaq/_udivsi3.o
    ../tool/gcc/ipaq/_modsi3.o
    ../tool/gcc/ipaq/_umodsi3.o
    ../tool/gcc/ipaq/_dvmd_lnx.o
    *(.text .stub .text.* .gnu.linkonce.t.*)    
  } =0
  .rodata         : 
  { 
    *(.rodata .rodata.* .gnu.linkonce.r.*) 
  }
  .rodata1        : 
  { 
    *(.rodata1) 
  }
  .data           :
  {
    *(.data .data.* .gnu.linkonce.d.*)
    SORT(CONSTRUCTORS)
  }
  .bss            :
  {
   *(COMMON)
   . = ALIGN(32 / 8);
  }
  . = ALIGN(32 / 8);
 /* PROVIDE (end = .);*/

}
