#include <stdio.h>

char s[1000001];

int main()
{
	int askii[128] = { 0, };
	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		askii[s[i]] += 1;
	}
	int mx = 0;
	int ans = 0;
	int is_unique = 1;
	for (int i = 65; i < 91; i++)
	{
		if (askii[i]+askii[i+32] > mx)
		{
			mx = askii[i] + askii[i + 32];
			ans = i;
			is_unique = 1;
		}
		else if (askii[i]+askii[i+32] == mx)
		{
			is_unique = 0;
		}
	}
	if (is_unique)
	{
		printf("%c",ans);
	}
	else
	{
		printf("?");
	} 
}