/************************************************************************
* Name: Aliaa Ahmed
* Date: 30/3/2023
* HomeWork3 :  HW_Strings EX3
* Text : Write C Program to Reverse String Without Using Library Function
*************************************************************************/

#include <stdio.h> 
#include <string.h>
int main(void)
{
	char s[50];
	printf("Enter a string: ");
	gets(s);
	int end , star;
	end = strlen(s);
	star = 0;
	end--;
	while (star <= end)
	{
		char temp = s[star];
		s[star] = s[end];
		s[end] = temp;
		//printf ("%c   ",s[end]);
		//printf ("%c   ",s[star]);
		star++;
		end--;
	}
    printf ("Reverse string is : %s",s);
	
	
}