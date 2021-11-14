#include <stdio.h>
#include <string.h>

char s[1000001];

int main()
{
	int cnt = 0;
	gets(s);
	int len = strlen(s);
	if (s[0] != ' ') cnt++;
	for (int i = 1; i < len; i++)
	{
		if (s[i-1] == ' ')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}