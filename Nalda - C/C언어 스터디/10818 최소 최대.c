#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int mn = 1000000;
	int mx = -1000000;
	// 배열을 사용한 풀이
	
	/*int arr[1000000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > mx) mx = arr[i];
		if (arr[i] < mn) mn = arr[i];
	}*/
	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		if (num > mx) mx = num;
		if (num < mn) mn = num;
	}
	printf("%d %d", mn, mx);
}