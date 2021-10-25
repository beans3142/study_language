#include <stdio.h>

int main()
{
	int n;
	int binary[16];
	int idx = 0; // 배열에 넣을 위치
	scanf("%d", &n);
	while (n)
	{
		int last_number;
		last_number = n & 1;
		binary[idx++] = last_number;
		n >>= 1;
	}
	for (int i = idx-1; i > -1; i--) // idx는 들어간 수의 개수, 3개 넣었으면 3 근데 출력은 2부터 해야되므로(0,1,2) -1시킨채로 시작
	{
		printf("%d", binary[i]);
	}
}