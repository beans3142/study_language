#include <stdio.h>

int swap(int *x, int *y);

int main()
{
	int x1 = 10;
	int y1 = 20;

	printf("스왑 하기 이전의 x1 : %d , y1 : %d\n", x1, y1);
	swap(&x1, &y1);
	printf("스왑 이후의 x1 : %d , y1 : %d\n", x1, y1);

}

int swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}