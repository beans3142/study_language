#include <stdio.h>
//전역변수
int globala = 10; 
int locala = 10;

int func1()
{
	printf("before declare func1 local a is %d\n", locala);
	int locala = 11;
	printf("func1 local a is %d\n", locala);
	printf("func1 global a is %d\n", globala);
}

int main()
{
	printf("before declare main local a is %d\n", locala);
	int locala = 9;
	printf("main local a is %d\n", locala);
	printf("main global a is %d\n", globala);

	printf("\n\n");

	func1();
}