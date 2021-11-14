
#include <stdio.h>

int main()
{
	// ���� �迭
	int a[1000] = { 0, };

	// 2���� �迭
	int dp[17][1000] = { 0, };
	dp[1][0] = 1;
	dp[2][0] = 2;

	// �Ǻ���ġ ���� ����
	int fibo[17] = { 0, 1 };
	for (int i = 2; i < 17; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	// n �Է�
	int n;
	scanf("%d", &n);

	// �����ϴ� ���� ����
	a[0] = fibo[n];

	// 2���� �迭 ���� ä���ֱ�
	for (int i = 3; i <= n; i++)
	{
		int idx = 0;
		for (int j = 0; j < fibo[i - 1]; j++)
		{
			dp[i][idx++] = (dp[i - 1][j] << 1);
		}
		for (int j = 0; j < fibo[i - 2]; j++)
		{
			dp[i][idx++] = (dp[i - 2][j] << 2) + 1;
		}
	}

	// 2���� �迭 �� �� (n��°)�� ����迭�� �ű�
	for (int i = 0; i < fibo[n]; i++)
	{
		a[i + 1] = dp[n][i];
	}

	// ���� ���
	printf("%d\n", a[0]);

	// �迭�� �־���� ���� ���
	for (int i = 0; i < fibo[n]; i++)
	{
		printb(a[i + 1]);
	}

}


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	// ���� �迭
	int a[1000] = { 0, };

	// �Ǻ���ġ ���� ����
	int fibo[17] = { 0, 1 };
	for (int i = 2; i < 17; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	// n �Է�
	int n;
	scanf("%d", &n);

	// �����ϴ� ���� ����
	a[0] = fibo[n];

	// ���� �迭�� ä�������� ������ ��ġ
	int idx = 1;

	// 2^(n-1) ���� 2^(n)������ ������ ��� �������� �ٲ㺸�鼭 11�� �����ϴ��� Ȯ��

	for (int i = pow(2, n - 1); i < pow(2, n); i++)
	{
		int num = i;
		int before = 0; // ������ ���� ���� �ڸ����� ����
		bool able = true;
		while (num)
		{
			if(before == 1 && num % 2 == 1) // ���� �ڸ����� ���� �ڸ����� ��� 1�� ��� = 11�� ������ ���
			{
				able = false;
				break;
			}
			before = num % 2;
			num >>= 1;
		}
		if (able)
		{
			a[idx++] = i;
		}
	}

	// ���� ���
	printf("%d\n", a[0]);

	// �迭�� �־���� ���� ���
	for (int i = 0; i < fibo[n]; i++)
	{
		printb(a[i + 1]);
	}
}	


// DFS ��� �ؾߵǷ���..?

#include <stdio.h>

int arr[1000]; // ���� �迭
int n; // �Է¹��� n
int idx = 1; // ���� �迭�� ä������ ��ġ

int main()
{

	scanf("%d", &n); // n �Է�;
	recur(1, 1);

	// ���� �����ϴ� �� ���� ���
	printf("%d\n", arr[0]);

	// �迭 2������ �ٲ� ���
	for (int i = 1; i <= arr[0]; i++)
	{
		printb(arr[i]); 
	}
}

int recur(int num, int len) // ����Լ�
{
	if (len == n)
	{
		arr[0] += 1; // ������ �����ϴ� ���� ���� +1
		arr[idx++] = num; //idx���� ä������
		return;
	}
	if (num % 2 == 0) recur((num << 1) + 1, len + 1); // ���ڸ��� 0�̸� �ڿ� 1 ���̱�
	recur(num << 1, len + 1); // ���ڸ��� 1�̵� 0�̵� �ڿ� 0 ���̱�
}

int printb(int n)
{
	int binary[16] = { 0, };
	int idx = 0; // �迭�� ���� ��ġ
	while (n)
	{
		int last_number;
		last_number = n & 1;
		binary[idx++] = last_number;
		n >>= 1;
	}
	for (int i = idx - 1; i > -1; i--) // idx�� �� ���� ����, 3�� �־����� 3 �ٵ� ����� 2���� �ؾߵǹǷ�(0,1,2) -1��Ųä�� ����
	{
		printf("%d", binary[i]);
	}
	printf(" "); // �� ����� ��ĭ ����ֱ� ���ؼ�
}