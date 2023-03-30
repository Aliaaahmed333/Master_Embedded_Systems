/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork3 :  HW_Arrays EX1
* Text : Write C Program to Insert an element in an array
******************************************************************/

#include <stdio.h>
#define  MAX_ELEMENT   50

int main(void)
{
	int arr[50] ;
	int x ,y,loc;
	printf("Enter no of elements : ");
	scanf ("%d",&x);
	for (int i = 0; i < x; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	scanf ("%d",&y);
	
	printf("Enter the location : ");
	scanf ("%d",&loc);
	for (int i = x; i >= loc-1; i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[loc-1] = y;
	for (int i = 0; i <= x; i++)
	{
		printf ("%d ",arr[i]);
	}
	
	
	
	
}