#include <stdio.h>
int main()
{
	int num, tmp = 0, * ptr;
	ptr = &num;
	num = 100;
	printf("num: %d, tmp: %d, ptr : %p\n\n", num, tmp, ptr);
	tmp = (*ptr)++;
	printf("num: %d, tmp: %d, ptr : %p\n\n", num, tmp, ptr);
	tmp = *ptr++;
	printf("num: %d, tmp: %d, ptr : %p\n\n", num, tmp, ptr);
	return 0;
}