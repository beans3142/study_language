#include <stdio.h>

/*
int swap(int *a, int *b)
{

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
*/

int main3()
{
	int n = 10;
	int m = 20;

	printf("%d %d\n", n, m);

	n = n ^ m;
	m = m ^ n;
	n = m ^ n;

	//swap(&n, &m);

	printf("%d %d", n, m);

	return 0;
}