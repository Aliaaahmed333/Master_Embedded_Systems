/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Aliaa Ahmed
 * @date           : 26/7/2023
 * @brief          : togele led
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Platform_Types.h"

#define  RCC_BASEADDRESS   0x40021000
#define  GPIO_PORTA        0x40010800
#define  RCC_APB2ENR      *(volatile u32*)(RCC_BASEADDRESS + 0x18)
#define  GPIOA_CRH        *(volatile u32*)(GPIO_PORTA + 0x04)
#define  GPIOA_ODR        *(volatile u32*)(GPIO_PORTA + 0x0C)
#define  RCC_IOPAEN       (1 << 2)
#define  GPIOA13          (1UL << 13)
typedef union {
	u32 all_fields;
	struct{
		vuint32_t  reserved:13 ;
		vuint32_t  p_13:1 ;
	}Pin;

}R_ODR_t;

volatile  R_ODR_t* R_ODR =  ((volatile u32*)(GPIO_PORTA + 0x0C));

int main(void)
{
	RCC_APB2ENR  |= RCC_IOPAEN ;
	GPIOA_CRH    &= 0xFF0FFFFF;
	GPIOA_CRH    |= 0x00200000;
	while(1)
	{
		R_ODR ->Pin.p_13 = 1; // turn on led
		for (int i = 0; i < 1000; i++); // delay for 1sec
		R_ODR ->Pin.p_13 = 0; // turn off led
		for (int i = 0; i < 1000; i++); // delay for 1sec

		/*
		GPIOA_ODR |=  GPIOA13; // turn on led
		for (int i = 0; i < 1000; i++); // delay for 1sec
		GPIOA_ODR &= ~(GPIOA13); // turn off led
		for (int i = 0; i < 1000; i++); // delay for 1sec
        */
	}
}
