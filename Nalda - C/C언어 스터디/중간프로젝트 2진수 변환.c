#include <stdio.h>

int main()
{
	int n;
	int binary[16];
	int idx = 0; // �迭�� ���� ��ġ
	scanf("%d", &n);
	while (n)
	{
		int last_number;
		last_number = n & 1;
		binary[idx++] = last_number;
		n >>= 1;
	}
	for (int i = idx-1; i > -1; i--) // idx�� �� ���� ����, 3�� �־����� 3 �ٵ� ����� 2���� �ؾߵǹǷ�(0,1,2) -1��Ųä�� ����
	{
		printf("%d", binary[i]);
	}
}