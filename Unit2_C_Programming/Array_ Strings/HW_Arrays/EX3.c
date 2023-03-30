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
	int a[50][50] ;
	int x ,y;
	printf("Enter rows and column of matrix: ");
	scanf ("%d%d",&x,&y);
	printf ("Enter element of matrix:\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y;j++)
		{
			printf ("Enter elements a%d%d :",j+1,i+1);
		    scanf ("%d",&a[i][j]);
		}
	}
	printf ("Entered Matrix:\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y;j++)
		{
			printf ("%d  ",a[i][j]);
		   
		}
		printf ("\n");
	}
    printf ("Transpose of Matrix:\n");
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x;j++)
		{
			printf ("%d  ",a[j][i]);
		   
		}
		printf ("\n");
	}

	
}