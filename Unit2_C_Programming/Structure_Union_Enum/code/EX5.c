/**************************************************************************
* Name: Aliaa Ahmed
* Date: 14/4/2023
* Homework5 : EX5
* Text : Write C Program to find area of a circle , passing arguments to macros 
***************************************************************************/ 

#include <stdio.h>
#define  PI  3.14
#define  AreaOfCircle(r)  ((r)*(r)*PI)

int main()
{
	float r;
	printf ("Enter the radius: ");
	scanf ("%f",&r);
	printf ("Area = %.2f",AreaOfCircle(r) );
	
}