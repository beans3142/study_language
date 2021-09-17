#include <stdio.h>

int main2390299318()
{
	/*int num=1;

	printf("메모리 내의 주소 : %d\n값 : %d\n", &num, num);

	int a = 1;
	int b = 2;
	int c = 3;

	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("%d %d", a, b);

	int * alphabet;
	alphabet = &num;

	printf("메모리 내의 주소 : %d\n값 : %d", alphabet, *alphabet);*/

	short arr[10];

	for (int i = 0; i<10; i++)
	{
		printf("%d\n", &arr[i]);
	}

	return 0;

}