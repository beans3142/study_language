#include <stdio.h>

int main()
{
	char board[8][8];

	for (int i = 0; i < 8; i++)
	{
		scanf_s("%8s", board[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		printf("%s", board[i]);
	}
}