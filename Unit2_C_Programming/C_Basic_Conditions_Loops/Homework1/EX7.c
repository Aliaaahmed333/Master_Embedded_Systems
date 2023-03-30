/**************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork1 : EX6
* Text : Write Source Code to Swap Two Numbers
**************************************************/



#include <stdio.h>

int main(void)
{
	float a,b,temp;
	printf("##########Console-output###\n");
	printf ("Enter value of a: ");
	scanf ("%f",&a);
	printf ("Enter value of b: ");
	scanf ("%f",&b);
	a += b;
	b = a- b;
	a -= b;
	printf ("After swapping, value of a = %f\n",a);
	printf ("After swapping, value of b = %f\n",b);
	/* another way*/
	/***************************************************
	a *= b;
	b = a/ b;
	a /= b;
	printf ("After swapping, value of a = %f\n",a);
	printf ("After swapping, value of b = %f\n",b);
	*****************************************************/
	/* another way*/
	/***************************************************
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf ("After swapping, value of a = %f\n",a);
	printf ("After swapping, value of b = %f\n",b);
	***************************************************/
}

