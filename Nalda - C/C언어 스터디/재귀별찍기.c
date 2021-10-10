#include <stdio.h>

int ps(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
	if (n == 1) return;
	ps(n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	ps(15);
}