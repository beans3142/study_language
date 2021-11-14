#include<stdio.h>

int main()
{
	int mx = 0;
	int midx = 0;
	int num;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		if (mx < num)
		{
			mx = num;
			midx = i+1;
		}
	}
	printf("%d\n%d",mx,midx);
}