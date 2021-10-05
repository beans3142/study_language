gi#include <stdio.h>
#include <math.h>

int main(void)
{
	int N;
	int is_prime = 1; //소수이면 1, 아니면 0
	int i, j;
	int count = 0; //10개 나열 후 개행
	int prime[1001];


	for (int i = 2; i < 1001; i++)
	{
		prime[i] = 1;
	}

//양의 정수 입력
	scanf("%d", &N);

	//소수 판별
	for (i = 2; i <= N;i++)
	{
		if (prime[i] != 1) continue;
		for (j = i + i; j <= N; j += i) prime[j] = 0;
	}
	//for (int i = 0; i <= N; i++) printf("%d %d\n", prime[i], i);

	if (prime[N]==1)
		printf("%d는 소수입니다.\n", N);
	else
		printf("%d는 소수가 아닙니다.\n", N);

	// 1부터 N사이의 소수 출력
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