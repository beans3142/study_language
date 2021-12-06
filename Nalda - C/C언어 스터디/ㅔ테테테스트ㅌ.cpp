#include<stdio.h>
#include<string.h>

int main()
{
    char cacu[1000000] = { 0 };
    char rlgh[10];
    int num[11];
    int c = 0;
    int many = 0;
    int sum;
    int count = 0;
    scanf_s("%s", cacu, 1000000);
    int len = strlen(cacu);
    for (int i = 0; i < len; i++)
    {
        if (cacu[i] == '+' || cacu[i] == '-' || cacu[i] == '/' || cacu[i] == '*')
        {
            for (int j = i - count; j < i; j++)
            {
                int a = cacu[j] - '0';
                if (j - 1 >= 0 && cacu[j - 1] - '0' == 0)
                    c = c * 100;
                else
                    c = c * 10;
                c += a;;

            }
            num[many] = c;
            rlgh[many] = cacu[i];
            many += 1;
            count = 0;
            c = 0;
        }
        else
        {
            count += 1;
        }

    }
    for (int i = len - count; i < len; i++)
    {
        int a = cacu[i] - '0';
        if (cacu[i] - '0' == 0)
            c = c * 100;
        else
            c = c * 10;
        c += a;
    }
    num[many + 1] = c;
    sum = num[0];
    for (int i = 0; i < many - 1; i++)
    {
        int next = num[i + 1];
        if (rlgh[i] == '+')
            sum = sum + next;
        else if (rlgh[i] == '-')
            sum = sum - next;
        else if (rlgh[i] == '/')
            sum = sum / next;
        else if (rlgh[i] == '*')
            sum = sum * next;
    }
    if (rlgh[many - 1] == '+')
        sum = sum + num[many + 1];
    else if (rlgh[many - 1] == '-')
        sum = sum - num[many + 1];
    else if (rlgh[many - 1] == '/')
        sum = sum / num[many + 1];
    else if (rlgh[many - 1] == '*')
        sum = sum * num[many + 1];
    printf("%d", sum);
}