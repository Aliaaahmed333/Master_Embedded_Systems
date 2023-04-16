/**************************************************************************
* Name: Aliaa Ahmed
* Date: 14/4/2023
* Homework5 : EX4
* Text : Write C Program to store information of students using structure 
***************************************************************************/ 

#include <stdio.h>
typedef struct students
{
	char name[20];
	int roll;
	float marks;
}students;


int main()
{
	 student arr[10];
	printf ("Enter information of students:\n");
	for (int i = 0; i < 10; i++)
	{
		arr[i].roll = i+1;
		printf ("\nFor roll number ");
		printf ("Enter name: ");
	    scanf ("%s",&arr[i].name);
	    printf ("Enter marks: ");
	    scanf ("%f",&arr[i].marks);
		printf ("\n");
	}
	
	printf ("Displaying information of students:\n");
	for (int i = 0; i < 10; i++)
	{
		printf ("\nInformation for roll number %d\n",arr[i].roll);
		printf ("Name: %s\n",arr[i].name);
	    printf ("Marks: %lf\n",arr[i].marks);
		printf ("\n");
	}
	
	

	
}

Complex add(Complex c1,Complex c2)
{
	Complex sum ;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img ;
	return sum;
}