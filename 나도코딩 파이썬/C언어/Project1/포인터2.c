#include <stdio.h>

int swap(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int merge(int arr[],int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	const int mid = arr_size/2;
	if (arr_size<2)
	{
		return arr;
	}
	int arr1[] = { 0 };
	int arr2[] = { 0 };
	for (int i = 0; i < mid; i++)
	{
		arr1[i] = arr[i];
	}
	for (int i = mid; i < arr_size; i++)
	{
		arr2[i] = arr[i];
	}
	int size_of_s1 = arr_size / 2;
	int size_of_s2 = (arr_size+1) / 2;
	int s1[] = {merge(arr1,size_of_s1)};
	int s2[] = {merge(arr2,size_of_s2)};

	int narr[sizeof(*arr)] = { 0, };
	int s1_idx = 0;
	int s2_idx = 0;
	int narr_idx = 0;
	while (s1_idx < size_of_s1 && s2_idx < size_of_s2)
	{
		if (s1[s1_idx] < s2[s2_idx])
		{
			narr[narr_idx++] = s1[s1_idx++];
		}
		else
		{
			narr[narr_idx++] = s2[s2_idx++];
		}
	}
	while (s1_idx < size_of_s1)
	{
		narr[narr_idx++] = s1[s1_idx++];
	}
	while (s2_idx < size_of_s2)
	{
		narr[narr_idx++] = s2[s2_idx++];
	}
	return narr;
}

int main1()
{
	int a[10] = {1,3,2,7,6,4,9,11,5,8};
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	//printf("\n%d\n", sizeof(a));
	merge(a,10);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}