#include <stdio.h>
int program(unsigned int c);
int recurse(int d);
int main() {
    int d, e[1000], i;
    printf("���Ϸ��� �ϴ� �������� �ڸ�����?(1~16) : ");
    scanf("%d", &d);
    e[0] = d;
    printf("%d")
    /*if (1 <= d <= 16)
        printf("2������ ������ %d�Դϴ�.\n", recurse(d));
    if (1 <= d <= 2)
        e[1] = 2 * *(d - 1);
    else
        for (i = 1; i <= recurse(d); i++)
            e[i] = 2 * *(d - 1) +
    else
        printf("�߸��� �Է��Դϴ�.")

        return 0;*/
}

int recurse(int d)
{
    if (d == 1)
        return 1;
    else if (d == 2)
        return 1;
    else
        return(recurse(d - 1) + recurse(d - 2));
}

int program() {
    int a;
    unsigned int b = 32768, c;
    if (c == 0) {
        printf("0");
        return 0;
    }
    else
        for (a = 0; a < 16; a++) {
            if (c & b)
                printf("1");
            else if (c > b)
                printf("0");
            b >>= 1;
        }
    return 0;
}