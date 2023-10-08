#include "StandardTypes.h"
#include "Platform_Types.h"
#include "uart.h"

#define UART0DR    *((vint8_t* const)((u32* )0x101f1000))
void Uart_SendString (u8* P_Text)
{
	
	while (*P_Text != '\0')
	{
		UART0DR = (u32)(*P_Text);
		P_Text++;
	}
	
}