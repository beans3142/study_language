#include <stdio.h>

int swap(int *x, int *y);

int main()
{
	int x1 = 10;
	int y1 = 20;

	printf("���� �ϱ� ������ x1 : %d , y1 : %d\n", x1, y1);
	swap(&x1, &y1);
	printf("���� ������ x1 : %d , y1 : %d\n", x1, y1);

}

int swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}