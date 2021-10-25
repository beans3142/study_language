#include <stdio.h>

int main()
{
	int n1, n2;
	while (1)
	{
		if (scanf("%d %d", &n1, &n2)!= EOF) break;
		printf("%d\n", n1 + n2);
	}
}