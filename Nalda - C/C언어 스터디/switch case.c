#include <stdio.h>
int main(void)

{
    int num;
    printf("정수입력 : ");
    scanf("%d", &num);
    const int type = num % 6;
    switch (type)
    {
    case 0:
        printf("2와 3의 공배수입니다.");
        break;

    case 2: case 4:
        printf("2의 배수입니다.");
        break;

    case 3:
        printf("3의 배수입니다");
        break;

    case 1: case 5:
        printf("해당없음");
        break;
    }

}