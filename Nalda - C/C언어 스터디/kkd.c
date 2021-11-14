#include <stdio.h>

void input_array(int *arr)
{
	int idx = 0;
	while (1)
	{
		scanf("%d", &arr[idx]);
		if (arr[idx] == 0) break;
		idx += 1;
	}
}

void print_array(int *arr)
{
	int idx = 0;
	while (arr[idx] != 0)
	{
		printf("%d\t", arr[idx++]);
	}
	printf("\n");
}

void sum_array(int* arr1,int* arr2,int* arr3)
{
	int idx = 0;
	while (arr1[idx] != 0 || arr2[idx] != 0)
	{
		arr3[idx] = arr1[idx] +arr2[idx];
		//printf("%d\t", arr1[idx] + arr2[idx]);
		idx++;
	}
	//printf("\nyas\n\n");
}

int main()
{
	int a[1000] = { 0, };
	int b[1000] = { 0, };
	int c[1000] = { 0, };
	input_array(a);
	input_array(b);
	sum_array(a, b, c);
	print_array(a);
	print_array(b);
	print_array(c);
}