#include <stdio.h>

int main()
{
	int n;
	char sum;
	int tmpt = 0;
	scanf("%d", &n);
	char s1[3] = {'0','0','\0'};
	char s2[3] = { '0','0','\0'};
	if (n < 10)
	{
		s1[1] = '0'+n;
		s2[1] = '0'+n;
	}
	else
	{
		s1[0] = '0' + n/10;
		s2[0] = '0' + n / 10;
		s1[1] = '0' + n % 10;
		s2[1] = '0' + n % 10;
	}
	do
	{
		tmpt += 1;
		sum = '0' + (s2[0] - '0' + s2[1] - '0') % 10;
		//printf("before %c %c\n",s2[0], sum);
		s2[0] = s2[1];
		s2[1] = sum;
		//printf("after %c %c\n", s2[0], sum);
	} while (s2[0] != s1[0] || s2[1] != s1[1]);
	printf("%d", tmpt);
}