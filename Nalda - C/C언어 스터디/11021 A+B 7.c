#include <stdio.h>

int main()
{
	int n;
	int a, b;
	int i=1;
	for (scanf("%d", &n); scanf("%d %d", &a, &b) && i <= n; printf("Case #%d: %d\n",i++, a + b));
}