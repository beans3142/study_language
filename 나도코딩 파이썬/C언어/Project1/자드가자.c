#include <stdio.h>

int strio()
{
	char str[256];

	scanf_s("%s", str, sizeof(str));
	printf("%s", str);

	return 0;
}