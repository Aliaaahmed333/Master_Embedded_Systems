/**************************************************
* Name: Aliaa Ahmed
* Date: 5/4/2023
* Midterm : q1
* Text : Write C Program to sum digit of number 
**************************************************/

#include <stdio.h>

int sum_digit(int num);
int main()
{
	int n;
	printf (" Enter your number : ");
	scanf ("%d",&n);
	printf ("sum of digit of this number = %d",sum_digit(n));
}

int sum_digit(int num)
{
	int count = 0; 
	while (num != 0)
	{
		count += num % 10;
		num /= 10;
	}
	return count;
}