#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int randros()
{
	srand(time(NULL));
	for (int i = 0; i < rand()%15; i++)
	{
		int num = rand() % 1500;
		printf("%d\n", num);
	}
	return 0;
}