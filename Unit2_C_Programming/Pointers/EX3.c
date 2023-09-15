
/**************************************************************************
* Name: Aliaa Ahmed
* Date: 18/7/2023
* Homework6 : EX3
* Text : Write a program in C to print a string in reverse using a pointer
* in the program.
***************************************************************************/ 


#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	printf ("Input a string : ");
	scanf ("%s",str);
	char *ptr = str;
	int j = strlen(str);
	printf ("Reverse of the string is : ");
	j--;
	while (j >= 0)
	{
		printf ("%c",ptr[j]);
		j--;
		
	}
}