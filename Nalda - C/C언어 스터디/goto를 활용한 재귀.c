#include <stdio.h>

int main()
{
	int i = 0;
	goto recur;

recur:
	printf("%d\n", i);
	if (i++ == 10) return;
	goto recur;
}