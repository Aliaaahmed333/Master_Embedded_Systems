/************************************************************************
* Name: Aliaa Ahmed
* Date: 2/4/2023
* HomeWork4 :   EX1
* Text : Write C Program to calculate Factorial of a Number using Recursion
*************************************************************************/
#include <stdio.h> 

int factorial (int num);
int main(void)
{
	int n;
	printf ("Enter an postive integer: ");
	scanf ("%d",&n);
	printf ("Factorial of %d = %ld",n,factorial(n));
	
}

int factorial (int num)
{
	
	if (num > 1)
	{
		return num * factorial(num-1);
	}
	else 
	{
		return 1;
	}
}