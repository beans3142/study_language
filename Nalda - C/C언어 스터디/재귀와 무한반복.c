#include <stdio.h>

int recur(int n)
{
	printf("%d\n", n);
	recur(n + 1);
}

int main()
{
	recur(0);
}