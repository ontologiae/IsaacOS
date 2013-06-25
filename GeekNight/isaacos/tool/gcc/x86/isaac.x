/* Default linker script, for normal executables */
OUTPUT_FORMAT("elf32-i386")
/* OUTPUT_ARCH(arm) */
ENTRY(entry_isaac)
/* SEARCH_DIR(/home/bsonntag/arm/lib);*/
SECTIONS
{  
  .text 0x200000        :
  {     
    ./tool/gcc/x86/entry_isaac.o    
    *(.text .stub .text.* .gnu.linkonce.t.*)    
  }
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
  }
  .bss            :
  {
   *(.bss)
   *(COMMON)
   . = ALIGN(32 / 8);
   __bss_stop = .;   
  }
}
