/**********************************************************************
* Name: Aliaa Ahmed
* Date: 5/4/2023
* Midterm : q1
* Text : Write C Program to find prime numbers between two number 
***********************************************************************/
#include <stdio.h>

char prime_number (int num);
int main()
{
	int n,m;
	scanf ("%d%d",&n,&m);
	for (int i = n; i < m; i++)
	{
		if (prime_number(i) == 0)
		{
			printf ("%d ",i);
		}
	}
}

char prime_number (int num)
{
	char flag = 0;
	for (int i = 2; i <= num/2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
		
	}
	
	return flag;
	
}