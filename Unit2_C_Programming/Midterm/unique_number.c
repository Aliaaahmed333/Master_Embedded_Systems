

#include <stdio.h>
#define MAX_ELEMENT    50
void unique_num (int arr[],int size);
int main()
{
	int arr[MAX_ELEMENT];
	int n;
	scanf ("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf ("%d",&arr[i]);
	}
	unique_num(arr,n);
	
}

void unique_num (int arr[],int size)
{
	int j = 0, i = 1; 
	int flag = 0;
	while (j < size)
	{
		if (arr[j] == arr[i])
		{
			flag = 1;
			j++;
			i = j;
		}
		
		if ((flag == 0) && (i == size-1))
		{
			printf ("%d",arr[j]);
			break;
		}
		
		i++;
	}
	
	
}