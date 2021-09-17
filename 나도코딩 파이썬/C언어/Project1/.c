/*
#include <stdio.h>
#include <stdlib.h>

int arr[100];

void boy(int x, int n)
{
	int dif = x+1;
	while (x < n)
	{
		arr[x] = abs(arr[x] - 1);
		x += dif;
	}
}

void girl(int x, int n)
{
	int left = x;
	int right = x;
	int end = 0;
	arr[x] = abs(arr[x]-1);
	while (left > -1 && right < n) 
	{
		if (arr[left] != arr[right])
		{
			break;
		}
		arr[left] = abs(arr[left] - 1);
		arr[right] = abs(arr[right] - 1);
		//printf("Something Wrong %d %d\n", left, right);
		left -= 1;
		right += 1;
	}
}

int main()
{
	int n,m;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int l;
		scanf_s("%d", &l);
		arr[i] = l;
	}

	scanf_s("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int sex, num;
		scanf_s("%d %d", &sex, &num);
		if (sex == 1)
		{
			boy(num-1, n);
		}
		else
		{
			girl(num-1, n);
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if (i % 20 == 19)
		{
			printf("\n");
		}
	}
	return 0;
}
*/