

#include <stdio.h>
#include <string.h>

char power_3 (int x);
int clear_specified_bit (int num,char pos);
void Reverse_array (int arr[],int const  size);
int last_occurrance (int arr[],int size);
int main(void)
{
	
	char s [100];
	scanf("%s",&s);
	
	if (s == "char")
	{
		printf ("num is %d bit char",(sizeof (char) *8));
	}
	else if (s == "short")
	{
		printf("num is %d bit short",(sizeof (short) *8));
	}
	else if (s == "int")
	{
		printf ("num is %d bit integer",(sizeof (int) *8));
	}
	else if (s == "float")
	{
		printf("num is %d bit float",(sizeof (float) *8));
	}
	else if (s == "double")
	{
		printf("num is %d bit double",(sizeof (double) *8));
	}
	
	/*
	int i;
	char s[100],USERNAME[] = "Aliaa Ahmed";
	gets (s);
	while (s[i] != '\0')
	{
		if (s[i] != USERNAME[i])
		{
			printf(" it is not the same\n" );
			break;
		}
		i++; 
	}
	if (i == strlen(s))
	{
		printf ("it is the same\n");
	}
	*/
	 //Reverse_array(arr,6);
	//printf ("%d",last_occurrance(arr,7));
	
	/*
	int arr1[100],arr2[100];
	int n,m,i;
	printf ("Enter number of element in arr1 : ");
	scanf ("%d",&n);
	for (int j = 0; j < n;j++)
	{
		scanf ("%d",&arr1[j]);
	}
	printf ("Enter number of element in arr2 : ");
	scanf ("%d",&m);
	for (int j = 0; j < m;j++)
	{
		scanf ("%d",&arr2[j]);
	}
	if (m > n)
	{
		for (i = 0; i < n; i++)
		{
			int temp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = temp;
		}

		while (i < m)
		{
			arr1[i] = arr2[i];
			i++;
		}
		
	}
	else if ( n > m)
	{
		for (i = 0; i < m; i++)
		{
			int temp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = temp;
		}
		while (i < n)
		{
			arr2[i] = arr1[i];
			i++;
		}
	}
	printf (" arr2 after swaping \n");
	for (int j = 0; j < n;j++)
	{
		printf ("%d  ",arr2[j]);
	}
	printf (" \narr1 after swaping \n");
	for (int j = 0; j < m;j++)
	{
		printf ("%d  ",arr1[j]);
	}
	*/
}
int last_occurrance (int arr[],int size)
{
	int last_index;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if ( arr[i] == arr[j])
			{
				last_index = j;
			}
		}
	}
	return last_index+1;
}
void Reverse_array (int arr[],int  size)
{
	int x = size;
	for (int i = 0; i < size;i++)
	{
		scanf ("%d",&arr[i]);
	}
	int star = 0;
	x --;
	while (star <= x )
	{
		int temp = arr[star];
		arr[star] = arr[x];
		arr[x] = temp;
		star++;
		x--;
	}
	for (int i = 0; i < size;i++)
	{
		printf ("%d  ",arr[i]);
	}
}
int clear_specified_bit (int num,char pos)
{
	return (num &= ~(1 << pos));
}
char power_3 (int x)
{
	if (x %3 == 0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

/*
arr1 n 
arr2 m 
after swap 
arr1 m
arr2 n*/