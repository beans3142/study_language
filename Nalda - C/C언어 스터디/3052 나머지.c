#include <stdio.h>

int main()
{
	int appeared[42] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d", &num);
		if (!appeared[num % 42])
		{
			appeared[num % 42] += 1;
			cnt += 1;
		}
	}
	printf("%d", cnt);
}