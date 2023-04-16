/**************************************************************************
* Name: Aliaa Ahmed
* Date: 10/4/2023
* Homework5 : EX1
* Text : Write C Program to Add Two Distances(int inch-feet) System 
* Using Structures 
***************************************************************************/ 

#include <stdio.h>

struct Distances
{
	int feet;
	float inch;
};

int main()
{
	struct Distances d1,d2,sum;
	printf ("Enter information for 1st distance \n");
	printf ("Enter feet: ");
	scanf ("%d",&d1.feet);
	printf ("Enter inch: ");
	scanf ("%f",&d1.inch);
	
   printf ("\n\nEnter information for 1st distance \n");
	printf ("Enter feet: ");
	scanf ("%d",&d2.feet);
	printf ("Enter inch: ");
	scanf ("%f",&d2.inch);
	
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	if (sum.inch > 12.0)
	{
		sum.inch -= 12.0;
		sum.feet++;
	}
	printf("\nSum of distances = %d-%.1f ",sum.feet,sum.inch);
	
	
	
	
}