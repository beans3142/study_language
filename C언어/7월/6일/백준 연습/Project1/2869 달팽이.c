#include<stdio.h>

int main() 
{
    int a, b, v; int day = 0;
    scanf_s("%d %d %d", &a, &b, &v);
    day = (v - b - 1) / (a - b) + 1;
    printf("%d\n", day);
}