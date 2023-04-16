/*****************************************************************************
* Name: Aliaa Ahmed
* Date: 5/4/2023
* Midterm : q1
* Text : Write C Program to sum numbers between 0 and your entered number 
*****************************************************************************/

#include <stdio.h>

int sum(int num);
int main()
{
	int n;
	scanf ("%d",&n);
	printf ("%d",sum(n));
}

int sum(int num)
{
	if (num != 0)
		return (num + sum (num-1));
	else 
		return 0;
	
}