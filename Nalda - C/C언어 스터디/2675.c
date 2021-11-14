#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char s[21];
		int num;
		scanf("%d %s", &num,s);
		for (int j = 0; s[j] != '\0'; j++)
		{
			for (int k = 0; k < num; k++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}