#include <stdio.h>

int elevator(int n)
{
	printf("���� ���� %d\n", n);
	if (n == 1)
	{
		printf("����! �ٽ� �ö󰩴ϴ�.\n");
		return;
	}
	else
	{
		elevator(n - 1);
	}
	printf("���� ���� %d\n", n);
}

int main()
{
	int story;
	printf("�� ���� ��� �ֽ��ϱ�? : ");
	scanf("%d", &story);
	elevator(story);
}