#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b < 45) {
		b += 60;
		a -= 1;
		if (a < 0) a = 23;
	}
	printf("%d %d", a, b-45);
}