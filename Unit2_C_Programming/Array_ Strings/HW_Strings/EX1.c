/************************************************************************
* Name: Aliaa Ahmed
* Date: 30/3/2023
* HomeWork3 :  HW_Strings EX1
* Text : Write C Program to find the frequency of characters in string
*************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[50], c;
	printf("Enter a string: ");
	gets(s);
	printf ("Enter a character to find frequency: ");
	scanf("%c",&c);
	int i = 0 , count = 0;
	while ( s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
		}
		i++;
	}
	printf ("Frequency of %c = %d",c,count);
	
}