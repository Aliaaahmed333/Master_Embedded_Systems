
/**************************************************************************
* Name: Aliaa Ahmed
* Date: 18/7/2023
* Homework6 : EX1
* Text : Write a program in C to print all the alphabets using a pointer. Go 
* to the editor
***************************************************************************/ 


#include <stdio.h>


int main()
{
	char x = 'A';
	
	char *ptr = &x;
	while (*ptr <= 'Z')
	{
		printf ("%c ",*ptr);
		++*ptr;
	}
}