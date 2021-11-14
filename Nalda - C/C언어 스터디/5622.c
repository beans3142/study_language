#include <stdio.h>

int main()
{
	int idx = 0;
	int each[9] = { 1,3,3,3,3,3,4,3,4 };
	int spend[27] = { 0, };

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < each[i]; j++)
		{
			spend[idx++] = i + 2;
		}
	}

	char s[16];

	int total_time = 0;

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		total_time += spend[s[i] - 'A'+1];
	}

	printf("%d", total_time);
}