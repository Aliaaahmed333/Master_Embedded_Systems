/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to find largest number between 3 numbers
******************************************************************/

#include <stdio.h>

int main(void)
{
    float x,y,z;
	printf("Enter three numbers: ");
	scanf ("%f%f%f",&x,&y,&z);
	if ((x > y) && (x > z))
	{
		printf("Largest number = %f",x);
	}
	else if ((y > x) && (y > z))
	{
		printf("Largest number = %f",y);
	}
	else 
	{
		printf("Largest number = %f",z);
	}
}