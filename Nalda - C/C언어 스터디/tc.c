#include<stdio.h>
int main()
{
	int a[16] = { 0, }, b, i, n;
	scanf("%d", &n);



	for (i = 15; i >= 0; --i) //2���� ��ȯ�Ͽ� a[] �迭�� �������� �Է�
	{
		a[i] = n >> i & 1;
	}



	for (i = 15; i >= 0; i--) // a�迭 �ڿ������� 1�� ������ ���� Ȯ��
	{
		if (a[i] != 0)
		{
			b = i;
			break;
		}
	}
	for (i = b; i >= 0; i--) //2���� ���
		printf("%d", a[i]);
	return 0;
}