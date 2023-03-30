/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX7
* Text : Write C Program to find factorial
******************************************************************/

#include <stdio.h>

int main(void)
{
	int x;
	long long sum = 1;
	printf("Enter an integer you want to check: ");
	scanf ("%d",&x);
	if ( x >= 0)
	{
		for (int i = 1; i <= x; i++)
	    {
		     sum *= i;
	    }
		printf ("Factorial = %d",sum);
	}
	
	else
	{
		printf ("Error!!! Factorial of negative number doesn't exist");
	}
	
	
}