#include <stdio.h>

#define SIZE 5

void print_array(const int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%2d ", arr[i]);
    printf("\n");
}

int find_array(const int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int add_to_set(int arr[], int size, int value, int* count)
{
    int index;
    if (find_array(arr, *count, value) == -1 && *count<size)
    {
        *(arr + *count) = value;
        //arr[*count]= value;
        *count += 1;
        return 1;
    }
    printf("해당 원소가 이미 존재합니다.\n");
    return 0;
}

int main(void)
{
    int arr[SIZE] = { 0 };
    int cnt = 0;

    while (cnt < SIZE)
    {
        int value;
        //배열에 추가할 원소 입력하기
        scanf("%d", &value);

        if (add_to_set(arr, SIZE, value, &cnt) == 0)
            continue;
        print_array(arr, SIZE);
    }

    return 0;
}