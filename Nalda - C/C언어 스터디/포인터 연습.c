#include <stdio.h>

int main()
{
	// ���ڿ� ������

	// ���� ���� ����غ���
	char* ptr1 = "Hello, World!";
	printf("%s\n", ptr1);

	// for�����ε� �ɱ�?
	for (int i = 0; i < 5; printf("%c", ptr1[i++]));
	printf("\n");
	// �ȴ� !

	// �Ʒ� �ڵ�� ���� �� ������ �߻���.
	
	/*
	for (int i = 0; i < 5; printf("%s", ptr1++));
	printf("\n");
	*/

	// ���ڿ� �������� ��� ���� ������ �� ����.
	//
	// ���� �Ʒ� �ڵ嵵 ������ �߻���

	/*
	ptr1[1] = 'h';
	printf("%s\n", ptr1);
	*/
}