#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int tmp;

	// 출력
	
	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d b[%d] = %d\n", i, a[i], i, b[i]);
	}

	printf("\n>>>>>change\n\n");

	// 값 서로 바꾸기
	for (int i = 0; i < 3; i++)
	{
		tmp = a[i]; // a[i]의 값을 tmp에 저장
		a[i] = b[i]; // b[i]의 값을 a[i]에 저장
		b[i] = tmp; // b[i]의 값에다 tmp를 저장
	}
	
	// 다시 출력
	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d b[%d] = %d\n", i,a[i],i, b[i]);
	}
}