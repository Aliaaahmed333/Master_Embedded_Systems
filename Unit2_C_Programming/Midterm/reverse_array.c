/**************************************************
* Name: Aliaa Ahmed
* Date: 5/4/2023
* Midterm : q8
* Text : Write C Program to reverse array
**************************************************/
#include <stdio.h>
#define MAX_ELEMENT    50
void print_array(int arr[],int size);
void reverse_array (int arr[],int size);
int main()
{
	static int arr[MAX_ELEMENT];
	int size;
	printf ("Enter number of element : ");
	scanf("%d",&size);
	printf (" Enter your element in array \n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse_array(arr,size);
	print_array(arr,size);
}
void reverse_array (int arr[],int size)
{
	int end = size-1;
	int start = 0;
	int temp;
	while (start <= end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void print_array(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		printf ("%d  ", arr[i]);
	}
}