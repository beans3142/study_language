#include <stdio.h>
#include <string.h>

int main()
{
	int arr[27];
	char s[100];
	memset(arr,-1,27*sizeof(int));
	scanf("%s", s);
	for (int i = 0; s[i]!='\0'; i++)
	{
		if (arr[s[i] - 'a'] == -1)
		{
			arr[s[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 27; i++)
	{
		printf("%d ", arr[i]);
	}
}