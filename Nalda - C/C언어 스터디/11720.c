#include <stdio.h>

int main()
{
	int sum = 0;
	int n;
	char s[100];

	scanf("%d", &n);
	scanf("%s", s);
	for (int i = 0; i < n; i++) sum += s[i] - '0';
	printf("%d", sum);
}