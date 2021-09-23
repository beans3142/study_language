#include <stdio.h>

int main()
{
	int arr[101] = { 0, };
	arr[1] = 1;
	for (int i = 1; printf("%d\n",arr[i++]) && i<=100; arr[i] = arr[i-1] + i);
}