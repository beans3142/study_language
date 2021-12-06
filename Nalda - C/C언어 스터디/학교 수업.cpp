#include <stdio.h>

int main()
{
	char str[50], tmp[50];
	char* from, * to;

	//문자열 입력
	gets_s(str);

	//str과 tmp의 주소를 포인터에 저장
	from = str;
	to = tmp;

	//str 문자열을 tmp에 복사
	while (*from != '\0')
	{
		*to++ = *from++;
	}
	//to 문자배열에 null 문자('\0') 추가
	*to = '\0';

	//문자배열 출력
	printf("str: %s, tmp: %s \n", str, tmp);

	return 0;
}
