#include <stdio.h>

int main()
{
	char s[100];
	gets(s);
	int i;
	for (i = 0; s[i++] != '\0'; );
	printf("%d", i-1);
}