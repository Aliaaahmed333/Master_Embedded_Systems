/************************************************************************
* Name: Aliaa Ahmed
* Date: 30/3/2023
* HomeWork3 :  HW_Strings EX2
* Text : Write C Program to find the Length of a String
*************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[50];
	printf("Enter a string: ");
	gets(s);
	
	int i = 0;
	while ( s[i] != '\0')
	{
		
		i++;
	}
	printf ("Length of string: %d",i);
	
}