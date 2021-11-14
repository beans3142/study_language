#include <stdio.h>
#include <string.h>

char arr[1000000];

int main()
{
    int cnt = 0;
    int len;
    scanf("%[^\n]s", arr);
    len = strlen(arr);
    if (arr[0] != ' ') cnt++;
    for (int i = 1; i < len; i++)
    {
        if (arr[i-1] == ' ')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}