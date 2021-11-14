#include <stdio.h>

int main()
{
	char s[102];
	int cnt = 0;
	scanf("%s", s);
	for (int i = 0; s[i] != '\0';)
	{
		if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				i += 1;
			}
		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				i += 1;
			}
		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
			}
		}
		else if (s[i] == 'c')
		{
			if (s[i + 1] == '=')
			{
				i += 1;
			}
			else if (s[i + 1] == '-')
			{
				i += 1;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == '-')
			{
				i += 1;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
			}
		}
		i += 1;
		cnt += 1;
	}
	printf("%d", cnt);
}