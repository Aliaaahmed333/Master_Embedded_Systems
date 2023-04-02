/************************************************************************
* Name: Aliaa Ahmed
* Date: 2/4/2023
* HomeWork4 :   EX3
* Text : Write C Program to calculate the power of a number using Recursion
*************************************************************************/
#include <stdio.h> 

int power_num (int n,int m);
int main(void)
{
	int n,m;
	printf ("Enter base number : ");
	scanf("%d",&n);
	printf("Enter power number (postive integer) : ");
	scanf("%d",&m);
	fflush(stdin);
	
	printf ("%d",power_num (n,m));
}

int  power_num (int n,int m)
{
	if (m > 0)
	{
		return (n *power_num(n,m--));
		
	}
	else
	{
		return 1;
	}
}