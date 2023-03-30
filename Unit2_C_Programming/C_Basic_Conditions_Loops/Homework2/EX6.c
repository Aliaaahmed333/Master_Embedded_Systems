/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to calculate some natural numbers
******************************************************************/

#include <stdio.h>

int main(void)
{
	int x ;
	long long sum = 0;
	printf("Enter an integer : ");
	scanf ("%d",&x);
	for (int i = 0; i <= x; i++)
	{
		sum += i;
	}
	printf ("sum = %d",sum);
	
	
}