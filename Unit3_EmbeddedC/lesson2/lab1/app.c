
#include "Platform_Types.h"
#include "uart.h"

u8 string_buffer[100] = "learn_in_depth :<Aliaa>";
void main(void)
{
	
	// versatilePB physical Board 
	Uart_SendString(string_buffer);
	
}