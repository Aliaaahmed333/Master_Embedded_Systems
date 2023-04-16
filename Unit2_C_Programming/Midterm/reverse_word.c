
#include <stdio.h>
#include <string.h>
#define MAX_ELEMENT    100

void  Reverse_word (char s[]);

int main()
{
	char s[MAX_ELEMENT ];
	printf ("Enter your sentence : ");
	gets(s);
	printf ("sentence after reverse : ");
	Reverse_word(s);
}

void  Reverse_word (char s[])
{
	int size = strlen(s);
    for (int i = size-1; i >= 0; i--)
	 {
	 	printf ("%c",s[i]);
	}
}