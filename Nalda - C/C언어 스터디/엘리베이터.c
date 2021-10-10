#include <stdio.h>

int elevator(int n)
{
	printf("현재 층수 %d\n", n);
	if (n == 1)
	{
		printf("도착! 다시 올라갑니다.\n");
		return;
	}
	else
	{
		elevator(n - 1);
	}
	printf("현재 층수 %d\n", n);
}

int main()
{
	int story;
	printf("몇 층에 살고 있습니까? : ");
	scanf("%d", &story);
	elevator(story);
}