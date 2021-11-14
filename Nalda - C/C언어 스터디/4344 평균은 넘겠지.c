#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		int n;
		scanf("%d", &n);
		float mean=0;
		int nums[1001] = { 0, };
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &nums[j]);
			mean +=nums[j];
		}
		mean /= n;
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (mean < nums[j]) cnt++;
		}
		printf("%0.3f%%\n",(float)cnt/n*100);
	}
}