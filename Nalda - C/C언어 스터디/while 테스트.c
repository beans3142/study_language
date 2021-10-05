#include <stdio.h>

int main()
{
	/*int i = -5;
	while (i++)
	{
		printf("%d\n", i);
	}*/

	int idx = 0;
	while (1)
	{
		printf("%d\n", idx++);
		if (idx == 5)
		{
			break;
		}
	}
}