#include<stdio.h>
int main()
{
	int n, i, max = 0;
	double arr[1000], avg = 0, sum = 0;
	scanf("%d", &n);



	for (i = 0; i < n; i++)

		scanf("%lf ", &arr[i]);



	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}



	for (i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	avg = sum / n;
	printf("%.2lf", avg);
	return 0;
}