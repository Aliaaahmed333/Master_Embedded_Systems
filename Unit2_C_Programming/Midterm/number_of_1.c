/**********************************************************************
* Name: Aliaa Ahmed
* Date: 5/4/2023
* Midterm : q1
* Text : Write C Program to count number of ones in any number 
***********************************************************************/
#include <stdio.h>


int count_of_1(int num);
int main()
{
	int n;
	printf ("Enter yoyr element : ");
	scanf ("%d",&n);
	printf ("number of ons in it's binary = :" );
	printf ("%d",count_of_1(n));
}

int count_of_1(int num)
{
	int count = 0;
	while (num != 0)
	{
		if (num %2 == 1)
		{
			count ++;
		}
		num /= 2;
	}
	return count;
	
}

