
/**************************************************************************
* Name: Aliaa Ahmed
* Date: 18/7/2023
* Homework6 : EX1
* Text : Write a program in C to show a pointer to an array which contents 
* are pointer to structure.
***************************************************************************/ 


#include <stdio.h>
typedef struct employee
{
	char name[50];
	int id;
}SEmployee;

int main()
{
	SEmployee emp1 = {"Alex",1002} ,emp2 = {"ali",1003} ;
	SEmployee (*arr[]) = {&emp1,&emp2}; 
	SEmployee (*(*ptr)[2]) = &arr;
	printf ("Employee name %s", (**ptr[0]).name);
	printf ("Employee id %d", (**ptr[0]).id);
	
	
}