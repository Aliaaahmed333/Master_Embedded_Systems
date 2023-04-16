/************************************************************************
* Name: Aliaa Ahmed
* Date: 2/4/2023
* HomeWork4 :   EX3
* Text : Write C Program to reverse a sentence using recursion 
*************************************************************************/
#include <stdio.h> 
void Reverse_sentence(void);

int main(void)
{
	printf ("Enter a sentence: ");
	Reverse_sentence();
}

void Reverse_sentence(void)
{
	char c;
	scanf("%c",&c);
	if (c != '\n')
	{
		 Reverse_sentence();
		 printf ("%c",c);
	}
}