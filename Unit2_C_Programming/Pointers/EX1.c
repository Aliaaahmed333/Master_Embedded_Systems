
/**************************************************************************
* Name: Aliaa Ahmed
* Date: 18/7/2023
* Homework6 : EX1
* Text : Write a program in C to demonstrate how to handle the pointers 
* in the program.
***************************************************************************/ 


#include <stdio.h>


int main()
{
	int x;
	printf (" Enter your variable \n");
	scanf ("%d",& x);
	int *ptr = &x;
	printf (" Address of x : %x\n",&x);
	printf (" Value of x : %d\n",x);
	printf (" Address of pointer ptr : %x\n",ptr);
	printf (" Value of pointer ptr : %d\n",*ptr);
}