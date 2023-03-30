/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX7
* Text : Write C Program to make a simple calculator
******************************************************************/

#include <stdio.h>

int main(void)
{
	float x ,y;
	char op;
	printf("Enter operator either + or - or * or devide : ");
	scanf ("%c",&op);
	printf("Enter two operands: ");
	scanf ("%f%f",&x,&y);
	
	switch (op)
	{
		case '+': printf ("%f %c %f = %f",x,op,y,x+y);break;
		case '-': printf ("%f %c %f = %f",x,op,y,x-y);break;
		case '*': printf ("%f %c %f = %f",x,op,y,x*y);break;
		case '/': if (y != 0){printf ("%f %c %f = %f",x,op,y,x/y);}
		          else {printf ("Error!!! logical error ");}
				  break;
	}
	
	
}