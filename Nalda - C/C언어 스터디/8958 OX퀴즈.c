#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char s[81];
		int stack = 0;
		int idx = 0;
		int score = 0;
		scanf("%s", s);
		while (s[idx])
		{
			if (s[idx] == 'O')
			{
				stack++;
				score += stack;
			}
			else
			{
				stack = 0;
			}
			idx++;
		}
		printf("%d\n",score);
	}
}