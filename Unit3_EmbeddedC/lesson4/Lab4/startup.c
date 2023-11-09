/*
 fileName : startup.c
 ENG : Aliaa Ahmed
 Date : 4/11/2023
 

*/

#include "Platform_Types.h"
#define STACK_Start_SP  0x20001000

extern int main(void);
void Rest_Handler(void);
void Default_Handler(void);

void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));
void  H_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));
void  NM_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));
void  Bus_Fault(void)__attribute__((weak,alias("Default_Handler")));
void  Usage_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));

extern u32 _stack_top  ;
extern u32 _E_text    ;
extern u32 _S_DATA    ;
extern u32 _E_DATA    ;
extern u32 _S_BSS     ;
extern u32 _E_BSS     ;

// Booking 1024 Byte  by .bss through un initialized array of int 256 element (256 *4 = 1024) 
static u32 Stack_top[256];
void (* G_P_Vectors [])()  __attribute__((section(".vectors"))) =
{
	(void (*)()) ((u32)Stack_top + sizeof (Stack_top)),
	&NMI_Handler,
	&H_Fault_Handler,
	&NM_Fault_Handler,
	&Bus_Fault,
	&Usage_Fault_Handler
};	
	   
void Rest_Handler (void)
{
	
	// to calculate data size
	u32 DATA_Size = ((u8*)&_E_DATA) - ((u8*)&_E_DATA);
	u8 * P_SRC = ((u8*)&_E_text);
	u8 * P_Dist = ((u8*)&_S_DATA);
	// copy byte by byte from flash to ram 
	for (int i = 0; i < DATA_Size;i++)
	{
		*((u8*)P_Dist++) = *((u8*)P_SRC++);
	}
	
	// initialize .bss section with zero 
	u32 BSS_Size = ((u8*)&_E_DATA) - ((u8*)&_E_DATA);
	P_Dist = ((u8*)&_S_BSS);
	
	for (int i = 0; i < BSS_Size;i++)
	{
		*((u8*)P_Dist++) = (u8)0;
	}
	// jump to main 
	main();
}
void Default_Handler(void)
{
	Rest_Handler();
}

/*
/* problems i face on this file 
 
 I also learn how to write vextor table in simple way .
 u32 vectors[]__attribute__((sections(".vectors"))) ={
	(u32) &_stack_top ,
	(u32) &Rest_Handler,
    (u32) &NMI_Handler  ,
	(u32) &H_Fault_Handler ,
	(u32) &NM_Fault_Handler ,
	(u32) & Bus_Fault  ,
	(u32) &Usage_Fault_Handler
	
	the target of this file is assign stack pointer in 1024 without writing it in linker script 
	so we reserve unintialized array in bss and assign end of this address to stack top 
} ;  
 
*/