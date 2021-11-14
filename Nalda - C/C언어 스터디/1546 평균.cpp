#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000];
	int mx = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		mx = mx < arr[i] ? arr[i] : mx;
	}

	float sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += (100.0 * arr[i]) / (mx * n);
	}
	printf("%f", sum);
}