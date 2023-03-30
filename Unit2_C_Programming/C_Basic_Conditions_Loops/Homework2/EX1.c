/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to check whether a number is even or odd
******************************************************************/

#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter an integer you want to check: ");
	scanf ("%d",&x);
	if ((x % 2) == 0)
	{
		printf ("%d is even",x);
	}
	else 
	{
		printf ("%d is odd",x);
	}
	
}