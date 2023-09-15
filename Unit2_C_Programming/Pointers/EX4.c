
/**************************************************************************
* Name: Aliaa Ahmed
* Date: 18/7/2023
* Homework6 : EX1
* Text : Write a program in C to print the elements of an array in reverse 
***************************************************************************/ 


#include <stdio.h>
#define MAX  15

int main()
{
	int arr[MAX] , n,i;
	int *ptr = arr;
	printf ("Input the number of elements to store in the array : ");
	scanf ("%d",&n);
	for ( i =0; i < n; i++)
	{
		printf ("element-%d : ",i+1);
		scanf ("%d",&arr[i]);
		ptr++;
	}
	ptr--;
	
	printf (" The element of array in reverse order are :\n ");
	
	while (i > 0)
	{
		printf ("element -%d : %d\n",i,*ptr--);
		i--;
	}
}