#include <stdio.h>
int main()
{
	int n = 0;
	int d = 1;
	int i = 0;
	int j = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - d * 0.5; j++)
			printf(" ");
		for (j = 1; j <= d; j++)
			printf("*");
		printf("\n");
		d += 2;
	}
	for (i = 1; i <= n; i++)
	{
		d -= 2;
		for (j = 1; j <= n - d * 0.5; j++)
			printf(" ");
		for (j = d; j >= 1; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}