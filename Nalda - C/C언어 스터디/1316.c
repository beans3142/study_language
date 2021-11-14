#include <stdio.h>

int main()
{
	int n;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char s[101];
		int v[26] = { 0, };
		int idx = 0;
		int is_group = 1;
		scanf("%s", s);
		while (s[idx] != '\0')
		{
			if (v[s[idx] - 'a'] == 0)
			{
				char now = s[idx];
				v[now-'a'] = 1;
				while (now == s[idx])
				{
					idx++;
				}
			}
			else
			{
				is_group = 0;
				break;
			}
		}
		if (is_group)
		{
			cnt += 1;
		}
	}
	printf("%d", cnt);
}