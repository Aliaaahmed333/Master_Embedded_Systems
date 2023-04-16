/************************************************************************
* Name: Aliaa Ahmed
* Date: 2/4/2023
* HomeWork4 :   EX4
* Text : Write C Program to calculate the power of a number using Recursion
*************************************************************************/
#include <stdio.h> 

int power_num (int base,int pow);
int main(void)
{
	int base,pow;
	printf ("Enter base number : ");
	scanf("%d",&base);
	printf("Enter power number (postive integer) : ");
	scanf("%d",&pow);
	printf ("%d^%d = %d",base,pow,power_num(base,pow));
}

int  power_num (int base,int pow)
{
	if (pow != 0)
	{
		return (base * power_num(base,pow-1));
		
	}
	else
	{
		return 1;
	}
}