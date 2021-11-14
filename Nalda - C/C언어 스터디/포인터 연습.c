#include <stdio.h>

int main()
{
	// 문자열 포인터

	// 예제 따라서 출력해보기
	char* ptr1 = "Hello, World!";
	printf("%s\n", ptr1);

	// for문으로도 될까?
	for (int i = 0; i < 5; printf("%c", ptr1[i++]));
	printf("\n");
	// 된다 !

	// 아래 코드는 실행 시 오류가 발생함.
	
	/*
	for (int i = 0; i < 5; printf("%s", ptr1++));
	printf("\n");
	*/

	// 문자열 포인터의 경우 값을 수정할 수 없음.
	//
	// 따라서 아래 코드도 에러가 발생함

	/*
	ptr1[1] = 'h';
	printf("%s\n", ptr1);
	*/
}