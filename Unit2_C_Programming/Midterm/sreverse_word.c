
#include <stdio.h>
#include <string.h>

#define MAX_ELEMENT    100

void  Reverse_word (char s[]);
int main()
{
	char arr[100];
	gets(arr);
	int size = strlen(arr);
	printf ("%d",size);
}

void  Reverse_word (char s[])
{
	int size = strlen(s);
	for (int i = size-1; i >= 0; i--)
	{
		printf ("%c",s[i]);
	}
}