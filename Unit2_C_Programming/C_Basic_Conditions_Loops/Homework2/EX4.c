/*****************************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to check whether a number is positive or negative
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	float x;
	printf("Enter an integer you want to check: ");
	scanf ("%f",&x);
	if (x > 0)
	{
		printf ("%f is positive",x);
	}
	else if (x == 0)
	{
		printf ("You entered zero");
	}
	else 
	{
		printf ("%f is negative",x);
	}
	
}