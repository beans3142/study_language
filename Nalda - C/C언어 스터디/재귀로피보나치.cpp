#include <stdio.h>

int fibo(int n)
{
	printf("%d\n", n);
	if (n < 2) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	n=fibo(5);
}