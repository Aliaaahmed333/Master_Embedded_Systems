/****************************************************************
* Name: Aliaa Ahmed
* Date: 29/3/2023
* HomeWork2 : EX1
* Text : Write C Program to check Vowel or Consonant
******************************************************************/

#include <stdio.h>

int main(void)
{
	char x;
	printf("Enter an alphabet: ");
	scanf ("%c",&x);
	switch (x)
	{
		case 'a': printf ("%c is a vowel",x);break;
		case 'e': printf ("%c is a vowel",x);break;
		case 'i': printf ("%c is a vowel",x);break;
		case 'o': printf ("%c is a vowel",x);break;
		case 'u': printf ("%c is a vowel",x);break;
		default : printf ("%c is a consonant",x);break;
	}
	
}