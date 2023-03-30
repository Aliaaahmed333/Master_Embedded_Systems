/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork3 :  HW_Arrays EX1
* Text : Write C Program to check whether a number is even or odd
******************************************************************/

#include <stdio.h>
#define  MAX_ELEMENT   50
int main(void)
{
	float a[50][50] , b[50][50];
	int x ;
	printf("Enter the element of 1st matrix : ");
	scanf ("%d",&x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x;j++)
		{
			printf ("Enter a%d%d :",j+1,i+1);
		    scanf ("%f",&a[i][j]);
		}
	}
	printf("Enter the element of 2st matrix : ");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x;j++)
		{
			printf ("Enter a%d%d :",j+1,i+1);
		    scanf ("%f",&b[i][j]);
		}
	}	
	printf ("Sum of Matrix\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x;j++)
		{
			printf (" %f  ",a[i][j]+b[i][j]);
		   
		}
		printf ("\n");
	}	
	
}