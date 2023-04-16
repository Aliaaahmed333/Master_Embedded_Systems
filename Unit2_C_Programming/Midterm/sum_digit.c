
#include <stdio.h>

int sum_digit(int num);
int main()
{
	int n;
	scanf ("%d",&n);
	printf ("%d",sum_digit(n));
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