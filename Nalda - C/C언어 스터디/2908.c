#include <stdio.h>

int main()
{
	char n1[4];
	char n2[4];
	char tmp;
	
	// 입력받는 부분
	scanf("%s %s", n1, n2);

	// 문자열 0 번째 인덱스와 2번째 인덱스 교환시켜줌
	tmp = n1[0];
	n1[0] = n1[2];
	n1[2] = tmp;
	tmp = n2[0];
	n2[0] = n2[2];
	n2[2] = tmp;

	int idx = 0;
	int bigger; // 어떤게 큰 지 알려줄 
	

	// 각 자리수 비교

	while (1)
	{
		if (n1[idx] > n2[idx])
		{
			bigger = 1;
			break;
		}
		else if (n2[idx] > n1[idx])
		{
			bigger = 0;
			break;
		}
		idx++;
	}

	if (bigger==1)
	{
		printf("%s", n1);
	}
	else
	{
		printf("%s",n2);
	}
}