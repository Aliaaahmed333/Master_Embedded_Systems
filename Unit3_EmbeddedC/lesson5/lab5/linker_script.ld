/*
linker_script.ld_cortex_m3
 Eng Aliaa Ahmed 
 Date: 9/11/2023
 TIME 08:13 AM
we add in this file heap section 
*/


MEMORY
{
	Flash(RX) : ORIGIN = 0x0800000 , LENGTH = 128K
	SRAM(RWX) : ORIGIN = 0x2000000 , LENGTH = 20K
}

SECTIONS
{
  .text :
  {
	*(.vectors*) /* any vector section in any file */
	*(.text*)   /* any text section in any file */
	*(.rodata*)
	_E_text = .;
  } > Flash
  .data :
  {
    _S_DATA = .;
	*(.data)
	*(.data.*)
	. = ALIGN(4);
	_E_DETA = .;
  }>SRAM AT > Flash
  .bss :
  {
     _S_BSS = .;
	 *(.bss*)
	 . = ALIGN(4);
	_E_BSS = .;
	. = ALIGN(4);
	. = . + 0x1000;
	_heap_End = .;
	. = ALIGN(4);
	. = . + 0x1000;
	_stack_top = .;
	
  } > SRAM
}
