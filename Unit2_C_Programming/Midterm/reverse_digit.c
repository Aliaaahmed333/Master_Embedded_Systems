
#include <stdio.h>


int reverse_digit(int n);
int main()
{
	int n;
	printf ("Enter your number you want to reverse :");
	scanf ("%d",&n);
	printf ("Number after reverse = %d",reverse_digit(n));
}

int reverse_digit(int n)
{
	int num = n;
	int res = 0;
	while (num != 0)
	{
		res = ((res * 10) +  (num %10));
		num /= 10;
	}
	return res ;
	
}

