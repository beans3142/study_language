#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	int tmp;

	// ���
	
	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d b[%d] = %d\n", i, a[i], i, b[i]);
	}

	printf("\n>>>>>change\n\n");

	// �� ���� �ٲٱ�
	for (int i = 0; i < 3; i++)
	{
		tmp = a[i]; // a[i]�� ���� tmp�� ����
		a[i] = b[i]; // b[i]�� ���� a[i]�� ����
		b[i] = tmp; // b[i]�� ������ tmp�� ����
	}
	
	// �ٽ� ���
	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d b[%d] = %d\n", i,a[i],i, b[i]);
	}
}