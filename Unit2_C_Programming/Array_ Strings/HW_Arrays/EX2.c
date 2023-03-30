/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork3 :  HW_Arrays EX1
* Text : Write C Program to calculate average using arrays
******************************************************************/

#include <stdio.h>
#define  MAX_ELEMENT   50
int main(void)
{
	float arr[50];
	float aver = 0;
	int x ;
	printf("Enter the number of data  : ");
	scanf ("%d",&x);
	for (int i = 0; i < x; i++)
	{
		printf ("%d. Enter number: ",i+1);
		scanf("%f",&arr[i]);
		aver += arr[i];
	}
	printf ("Average = %f",aver/x);
	
	
	
}