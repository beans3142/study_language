#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char* sour, * dest, tmp[50];

	sour = str;
	dest = tmp;

	//���ڿ� �Է� (���� ������ ��)
	gets(str);
	if (str[strlen(str) - 1] != 32)
		str[strlen(str)] = 32;

	while (*sour)
	{
		if (*sour == 32)
		{
			*dest++ = '\0';
			printf("%s \n", tmp);
			dest = tmp;
		}
		else
		{
			*dest++ = *sour;
		}
		*sour++;
	}

	return 0;
}