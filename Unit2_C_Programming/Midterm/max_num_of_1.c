
#include <stdio.h>


int max_consessitive_ons(int num);
int main()
{
	int n;
	printf ("Enter your number : ");
	scanf ("%d",&n);
	//max_consessitive_ons(n);
	printf (" max number of ons between two zeros = %d",max_consessitive_ons(n));
}

int max_consessitive_ons(int num)
{
	int arr[100];
	int i = 0;
	int max_con = 0;
	int count = 0;
	
	while (num != 0)
	{
		
		arr[i] = num %2;
		num /= 2;
		i++;
	}
	int j = 0;
	while (j < i)
	{
		if (arr[j] == 0 && arr[j+1] == 1)
		{
			j++;
			count++;
			while (arr[j+1] == 1)
			{
				count ++;
				j++;
			}
		}
		if (count > max_con)
		{
			max_con = count;
		}
		count = 0;	
		j++;
	}
	return max_con;
}

