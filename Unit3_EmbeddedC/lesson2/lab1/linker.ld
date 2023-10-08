


ENTRY(reset)
MEMORY
{
    Mem (rwx): ORIGIN = 0x00000000  ,LENGTH = 64M
}

SECTIONS
{
    . = 0x10000;
   .Reset :
   {
      startup.o(.text)
   } >Mem
   .Text :
   {
      *(.text)
   } >Mem
   .Data :
   {
      *(.data)
   } >Mem
   .Bss :
   {
      *(.bss)
   } >Mem
   . = . + 0x10000; /* 4KB of stack*/
   stack_top = .;
}

