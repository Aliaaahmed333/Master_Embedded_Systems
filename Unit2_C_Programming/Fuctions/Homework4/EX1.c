/************************************************************************
* Name: Aliaa Ahmed
* Date: 2/4/2023
* HomeWork4 :   EX1
* Text : prime Numbers Between 2 Intervals by Making User-defined function
*************************************************************************/
#include <stdio.h> 

int Prime_Number (int n);

int main(void)
{
	int x , y;
	printf ("Enter two numbers(intervals): ");
	scanf ("%d%d",&x,&y);
	printf ("Prime numbers between %d and %d are: ",x,y);
	for (int i = x; i < y; i++)
	{
		if (Prime_Number(i) == 0)
		{
			printf ("%d ",i);
		}
	}
	
}

int Prime_Number (int n)
{
	int flag = 0;
	for (int i = 2; i < n/2; i++)
	{
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
	
}