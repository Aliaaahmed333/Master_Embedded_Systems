/**************************************************************************
* Name: Aliaa Ahmed
* Date: 10/4/2023
* Homework5 : EX1
* Text : Write C Program to store information (name,roll and marks) of
* student using structure 
***************************************************************************/ 

#include <stdio.h>
struct students
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct students s1;
	printf ("Enter information of students:\n");
	printf ("\nEnter name: ");
	scanf ("%s",&s1.name);
	printf ("Enter roll number: ");
	scanf ("%d",&s1.roll);
	printf ("Enter marks: ");
	scanf ("%f",&s1.marks);
    printf ("\nDisplaying Information \n ");
	printf ("name: %s\n ",s1.name);
	printf ("Roll: %d\n ",s1.roll);
	printf ("Marks: %f\n ",s1.marks);
	
	
	
	
}