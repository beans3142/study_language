gi#include <stdio.h>
#include <math.h>

int main(void)
{
	int N;
	int is_prime = 1; //�Ҽ��̸� 1, �ƴϸ� 0
	int i, j;
	int count = 0; //10�� ���� �� ����
	int prime[1001];


	for (int i = 2; i < 1001; i++)
	{
		prime[i] = 1;
	}

//���� ���� �Է�
	scanf("%d", &N);

	//�Ҽ� �Ǻ�
	for (i = 2; i <= N;i++)
	{
		if (prime[i] != 1) continue;
		for (j = i + i; j <= N; j += i) prime[j] = 0;
	}
	//for (int i = 0; i <= N; i++) printf("%d %d\n", prime[i], i);

	if (prime[N]==1)
		printf("%d�� �Ҽ��Դϴ�.\n", N);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", N);

	// 1���� N������ �Ҽ� ���
	for (int i = 1; i <= N; i++)
	{
		if (prime[i] == 1)
		{
			printf("%3d ", i);
			count += 1;
			if (count == 10)
			{
				printf("\n");
				count = 0;
			}
		}
	}

	return 0;
}