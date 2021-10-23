#include <stdio.h>

int arr[1000];
int n;
int ten = 0;
int idx = 1;

int bin(int num)
{
	int index = 0;
	int array[16];
	while (num)
	{
		array[index] = num & 1;
		num >>= 1;
		index++;
	}
	while (index--) printf("%d", array[index]);
	ten++;
	if (ten == 10)
	{
		printf("\n");
		ten = 0;
	}
	else printf(" ");
}

int recur(int num, int len)
{
	if (len == n)
	{
		arr[0] += 1;
		arr[idx++] = num;
		return;
	}
	if (num % 2 == 0)
	{
		recur((num << 1) + 1, len + 1);
	}
	recur(num << 1, len + 1);
}

int main()
{
	scanf("%d", &n);
	recur(1, 1);
	printf("%d %d\n", n,arr[0]);
	for (int i = 1; i <= arr[0]; i++)
	{
		bin(arr[i]);
	}
}