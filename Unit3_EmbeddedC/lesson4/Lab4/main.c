/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Aliaa Ahmed
 * @date           : 4/11/2023
 * @brief          : togele led
 ******************************************************************************
 ******************************************************************************
 */

#include "Platform_Types.h"


#define  SYSCTL_RCGC2_R     (*((volatile u32*)0x400FE108))
#define  GPIO_PORTF_DIR_R   (*((volatile u32*)0x400253FC))
#define   GPIO_PORTF_DEN_R  (*((volatile u32*)0x4002551C))
#define   GPIO_PORTF_DATA_R (*((volatile u32*)0x40025400))







int main(void)
{
	volatile u32 count;
	// Enable clock for gpio port
	SYSCTL_RCGC2_R = 0x00000020;
	// wait to make sure that the clock on 
	for (count = 0; count < 2000000;count++);
	// set PF3 the direction as output 
	GPIO_PORTF_DIR_R |= (1 << 3);
	// Toggel led  on pf3 
	while (1)
	{
		// turn on led and wait to see it 
		GPIO_PORTF_DATA_R |= (1 <<3);
		for (count = 0; count < 2000000;count++);
		// turn off the led and wait to see it 
		GPIO_PORTF_DATA_R &= ~(1 <<3);
		for (count = 0; count < 2000000;count++);
	}
	return 0;
}
