#include <stdio.h>

int age[456];
int usa_map[27][27][27] = { 0, };
float height[456], weight[456];
char name[456][9];
char gender[456];

int main() {
	int n, q;

	scanf("%d %d", &n, &q);


	for (int i = 0; i < n; i++) {
		char abc[5];
		scanf("%s %s %d %c %f %f", abc,name[i],&age[i],&gender[i],&height[i],&weight[i]);
		int key[3];
		for (int j = 0; j < 3; j++)
		{
			key[j] = abc[j] - 'a';
			//printf("%d", key[i]);
		}
		usa_map[key[0]][key[1]][key[2]] = i+1;
	}

	for (int i = 0; i < q; i++) {
		char type[7];
		char s_key[4];
		scanf("%s %s", type, s_key);
		int key[3];
		for (int j = 0; j < 3; j++)
		{
			key[j] = s_key[j] - 'a';
			//printf("%d", key[i]);
		}
		int ord = usa_map[key[0]][key[1]][key[2]] - 1;
		if (ord == -1)
		{
			printf("squid\n");
		}
		else {
			if (type[0] == 'n')
			{
				printf("%s\n", name[ord]);
			}
			else if (type[0] == 'g')
			{
				printf("%c\n", gender[ord]);
			}
			else if (type[0] == 'h')
			{
				printf("%.1f\n", height[ord]);
			}
			else if (type[0] == 'w')
			{
				printf("%.1f\n", weight[ord]);
			}
			else if (type[0] == 'a')
			{
				printf("%d\n", age[ord]);
			}
		}
	}
	return 0;
}

