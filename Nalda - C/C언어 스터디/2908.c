#include <stdio.h>

int main()
{
	char n1[4];
	char n2[4];
	char tmp;
	
	// �Է¹޴� �κ�
	scanf("%s %s", n1, n2);

	// ���ڿ� 0 ��° �ε����� 2��° �ε��� ��ȯ������
	tmp = n1[0];
	n1[0] = n1[2];
	n1[2] = tmp;
	tmp = n2[0];
	n2[0] = n2[2];
	n2[2] = tmp;

	int idx = 0;
	int bigger; // ��� ū �� �˷��� 
	

	// �� �ڸ��� ��

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