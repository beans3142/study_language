#include <stdio.h>
/*
int fibo(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n ==0)
	{
		return 0;
	}
	return fibo(n - 1) + fibo(n - 2);
}
*/
int fibo(int n1, int n2,int recur,int n)
{
	if (n<2)
	{
		if (n == 0) return n1;
		else if(n == 1) return n2;
	}
	else if (n == recur)
	{
		return n1;
	}
	return fibo(n2, n1 + n2, recur + 1, n);
}

int main()
{
	for (int i = 0; i < 16; i++)
	{
		printf("%d 번째 피보나치 수 %d\n", i, fibo(0,1,0,i));
		//printf("%d 번째 피보나치 수 %d\n", i, fibo(i));
	}
}