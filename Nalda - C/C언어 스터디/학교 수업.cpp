#include <stdio.h>

int main()
{
	char str[50], tmp[50];
	char* from, * to;

	//���ڿ� �Է�
	gets_s(str);

	//str�� tmp�� �ּҸ� �����Ϳ� ����
	from = str;
	to = tmp;

	//str ���ڿ��� tmp�� ����
	while (*from != '\0')
	{
		*to++ = *from++;
	}
	//to ���ڹ迭�� null ����('\0') �߰�
	*to = '\0';

	//���ڹ迭 ���
	printf("str: %s, tmp: %s \n", str, tmp);

	return 0;
}
