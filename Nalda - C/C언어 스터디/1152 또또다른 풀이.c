#include <stdio.h>
#include <stdlib.h>

int main()
{
	char now=' ';
	char before = ' ';
	int cnt = 0;
	while (1)
	{
		now = getchar();
		if ((int)now == 10) break;
		if (before == ' ' && now != ' ')
		{
			cnt++;
		}
		before = now;
	}
	printf("%d", cnt);
}