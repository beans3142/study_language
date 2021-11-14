
#include <stdio.h>

int main()
{
	// 정답 배열
	int a[1000] = { 0, };

	// 2차원 배열
	int dp[17][1000] = { 0, };
	dp[1][0] = 1;
	dp[2][0] = 2;

	// 피보나치 수열 구현
	int fibo[17] = { 0, 1 };
	for (int i = 2; i < 17; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	// n 입력
	int n;
	scanf("%d", &n);

	// 만족하는 수의 개수
	a[0] = fibo[n];

	// 2차원 배열 값을 채워넣기
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

	// 2차원 배열 맨 끝 (n번째)를 정답배열로 옮김
	for (int i = 0; i < fibo[n]; i++)
	{
		a[i + 1] = dp[n][i];
	}

	// 개수 출력
	printf("%d\n", a[0]);

	// 배열에 넣어놓은 값들 출력
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
	// 정답 배열
	int a[1000] = { 0, };

	// 피보나치 수열 구현
	int fibo[17] = { 0, 1 };
	for (int i = 2; i < 17; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	// n 입력
	int n;
	scanf("%d", &n);

	// 만족하는 수의 개수
	a[0] = fibo[n];

	// 정답 배열을 채워나가기 시작할 위치
	int idx = 1;

	// 2^(n-1) 부터 2^(n)까지의 수들을 모두 이진수로 바꿔보면서 11이 등장하는지 확인

	for (int i = pow(2, n - 1); i < pow(2, n); i++)
	{
		int num = i;
		int before = 0; // 이진수 기준 이전 자리수를 저장
		bool able = true;
		while (num)
		{
			if(before == 1 && num % 2 == 1) // 이전 자리수와 현재 자리수가 모두 1인 경우 = 11이 등장한 경우
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

	// 개수 출력
	printf("%d\n", a[0]);

	// 배열에 넣어놓은 값들 출력
	for (int i = 0; i < fibo[n]; i++)
	{
		printb(a[i + 1]);
	}
}	


// DFS 라고 해야되려나..?

#include <stdio.h>

int arr[1000]; // 정답 배열
int n; // 입력받을 n
int idx = 1; // 정답 배열을 채워놓을 위치

int main()
{

	scanf("%d", &n); // n 입력;
	recur(1, 1);

	// 정답 만족하는 것 개수 출력
	printf("%d\n", arr[0]);

	// 배열 2진수로 바꿔 출력
	for (int i = 1; i <= arr[0]; i++)
	{
		printb(arr[i]); 
	}
}

int recur(int num, int len) // 재귀함수
{
	if (len == n)
	{
		arr[0] += 1; // 조건을 만족하는 수의 개수 +1
		arr[idx++] = num; //idx부터 채워나감
		return;
	}
	if (num % 2 == 0) recur((num << 1) + 1, len + 1); // 끝자리가 0이면 뒤에 1 붙이기
	recur(num << 1, len + 1); // 끝자리가 1이든 0이든 뒤에 0 붙이기
}

int printb(int n)
{
	int binary[16] = { 0, };
	int idx = 0; // 배열에 넣을 위치
	while (n)
	{
		int last_number;
		last_number = n & 1;
		binary[idx++] = last_number;
		n >>= 1;
	}
	for (int i = idx - 1; i > -1; i--) // idx는 들어간 수의 개수, 3개 넣었으면 3 근데 출력은 2부터 해야되므로(0,1,2) -1시킨채로 시작
	{
		printf("%d", binary[i]);
	}
	printf(" "); // 다 출력후 한칸 띄워주기 위해서
}