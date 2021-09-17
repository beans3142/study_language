#include <stdio.h>

int main()
{
	int n;
	int arr[10001] = { 0, };

	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf_s("%d", &num);
		arr[num] += 1;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n", i);
		}
	}
}