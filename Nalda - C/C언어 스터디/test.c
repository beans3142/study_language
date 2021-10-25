#include<stdio.h>
unsigned long long int prime(unsigned long long int a)
{
    unsigned long long int b, e, c, d;
    b = 1;
    d = 1;
    e = a;
    if (a % 2 == 0)
        c = 10;
    else
        c = 1;

    while (1)
    {
        a = a >> 1;
        if (a == 0)
            break;
        else if (a % 2 == 0)
            c = c * 10;
        else
            c = c * 10 + 1;
    }
    for (b = c; b > 0; )
    {
        b = b / 10;
        if (b % 10 == 0)
            d = d * 10;
        else
            d = d * 10 + 1;
    }
    d = d / 10;
    if (e % 2 == 0)
        d = d / 10;
    return d;
}
int main()
{
    unsigned long long int a, b, f;
    int c, d, e, i, j, count;
    c = 0;
    count = 0;
    i = 2;
    e = 0;
    d = 0;
    scanf_s("%d", &e);
    if (e != 1)
        for (a = 1; a < e; a++) i = i * 2;
    for (a = 1; a < i; a++)
    {
        b = prime(a);
        c = 0;
        while (1)
        {
            if (b == 0)
            {
                if (c == e)
                    d = d + 1;
                else
                    break;
            }
            else if (b % 10 == 1)
            {
                if ((b / 10) % 10 == 1)
                    break;
            }
            c = c + 1;
            b = b / 10;
        }
    }
    printf("%d %d \n", e, d);
    for (a = 1; a < i; a++)
    {
        b = prime(a);
        c = 0;
        f = b; // while 문 안에 있던 거를 밖으로 빼줌
        while (1)
        {
            if (b == 0)
            {
                if (c == e)
                    printf("%llu \n", f);
                else
                    break;
            }
            else if (b % 10 == 1)
            {
                if ((b / 10) % 10 == 1)
                    break;
            }
            c = c + 1;
            b = b / 10;
        }
    }
}