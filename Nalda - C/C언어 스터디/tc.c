#include<stdio.h>
int main()
{
	int a[16] = { 0, }, b, i, n;
	scanf("%d", &n);



	for (i = 15; i >= 0; --i) //2진수 변환하여 a[] 배열에 역순으로 입력
	{
		a[i] = n >> i & 1;
	}



	for (i = 15; i >= 0; i--) // a배열 뒤에서부터 1이 나오는 지점 확인
	{
		if (a[i] != 0)
		{
			b = i;
			break;
		}
	}
	for (i = b; i >= 0; i--) //2진수 출력
		printf("%d", a[i]);
	return 0;
}