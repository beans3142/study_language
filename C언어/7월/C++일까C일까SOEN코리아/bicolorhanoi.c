#include <stdio.h>
void hanoi(int disks, char source, char temp, char target)
{
    if (disks == 1)
    {
        printf("move disk from %c to %cn", source, target);
        printf("move disk from %c to %cn", source, target);
    }
    else
    {
        hanoi(disks - 1, source, target, temp);
        hanoi(1, source, temp, target);
        hanoi(disks - 1, temp, source, target);
    }
}

void hanoi2colors(int disks)
{
    char source = 'A';
    char temp = 'B';
    char target = 'C';
    int i;
    for (i = disks / 2; i > 1; i--)
    {
        hanoi(i - 1, source, temp, target);
        printf("move disk from %c to %cn", source, temp);
        printf("move disk from %c to %cn", source, temp);
        hanoi(i - 1, target, temp, source);
        printf("move disk from %c to %cn", temp, target);
    }
    printf("move disk from %c to %cn", source, temp);
    printf("move disk from %c to %cn", source, target);
}

int main()
{
    int n;
    printf("Please enter the number of disks:");
    scanf_s("%d", &n);
    hanoi2colors(n);
    return 0;
}