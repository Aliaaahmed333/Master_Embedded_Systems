/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork3 :  HW_Arrays EX1
* Text : Write C Program to Search an element in array
******************************************************************/

#include <stdio.h>
#define  MAX_ELEMENT   50

int main(void)
{
	int arr[50] ;
	int x ,y,loc = -1;
	printf("Enter no of elements : ");
	scanf ("%d",&x);
	for (int i = 0; i < x; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched : ");
	scanf ("%d",&y);
	
	
	for (int i = 0; i < x; i++)
	{
		if (arr[i] == y)
		{
			loc = i+1;
			break;
		}
	}
	if (loc != -1)
	{
		printf ("Number found at the location = %d",loc);
	}
	else 
	{
		printf ("Number not exist in array ");
	}
		
	
	
}