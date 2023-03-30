/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to check whether a number is even or odd
******************************************************************/

#include <stdio.h>

int main(void)
{
	char x;
	printf("Enter a character: ");
	scanf ("%c",&x);
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		printf ("%c is an alphabet",x);
	}
	else 
	{
		printf ("%c is not alphabet",x);
	}
	
}