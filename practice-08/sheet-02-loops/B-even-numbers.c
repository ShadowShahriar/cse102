#include <stdio.h>
int main()
{
	int n = 0;
	int flag = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			flag = 1;
			printf("%d\n", i);
		}
	}
	if (flag == 0)
		printf("-1\n");
	return 0;
}