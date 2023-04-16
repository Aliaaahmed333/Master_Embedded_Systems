/**************************************************************************
* Name: Aliaa Ahmed
* Date: 14/4/2023
* Homework5 : EX3
* Text : Write C Program to Add Two Complex Numbers by Passing Structure  
*  to a Function
***************************************************************************/ 

#include <stdio.h>
typedef struct Complex
{
	float real;
	float img;
}Complex;
Complex add(Complex c1,Complex c2);

int main()
{
	 Complex c1,c2,sum;
	printf ("for 1st complex number \n");
	printf ("Enter real and imaginary respectively: ");
	scanf ("%f %f",&c1.real,&c1.img);
    printf ("\n\n For 2nd complex number \n");
	printf ("Enter real and imaginary respectively: ");
	scanf ("%f %f",&c2.real,&c2.img);
	
	sum = add(c1,c2);
	printf("\nSum = %.1f+%.1fi ",sum.real,sum.img);
	

	
}

Complex add(Complex c1,Complex c2)
{
	Complex sum ;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img ;
	return sum;
}