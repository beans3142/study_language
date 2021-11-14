#include <stdio.h>

int main()
{
	int a,b,c,num;
	int cnt[10] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	num = a * b * c;
	while (num)
	{
		cnt[num % 10] += 1;
		num /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", cnt[i]);
	}
}