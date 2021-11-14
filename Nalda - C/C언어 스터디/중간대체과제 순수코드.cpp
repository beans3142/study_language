#include <stdio.h>
int arr[1000];
int n,ten,idx;

int recur(int num, int len)
{
	if (len == n)
	{
		arr[0] += 1;
		arr[++idx] = num;
		return 0;
	}
	if (num % 2 == 0) recur((num << 1) + 1, len + 1);
	recur(num << 1, len + 1);
}

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
	printf(" ");
	return 0;
}

int main()
{
	scanf("%d", &n);
	recur(1, 1);
	printf("%d\n", arr[0]);
	for (int i = 1; i <= arr[0]; i++) bin(arr[i]);
}
