#include <stdio.h>
int main(void)

{
    int num;
    printf("�����Է� : ");
    scanf("%d", &num);
    const int type = num % 6;
    switch (type)
    {
    case 0:
        printf("2�� 3�� ������Դϴ�.");
        break;

    case 2: case 4:
        printf("2�� ����Դϴ�.");
        break;

    case 3:
        printf("3�� ����Դϴ�");
        break;

    case 1: case 5:
        printf("�ش����");
        break;
    }

}