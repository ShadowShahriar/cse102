#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	for (int I = 1; I <= 4 * N; I++)
	{
		if (I % 4 == 0)
			printf("PUM\n", I);
		else
			printf("%d ", I);
	}
	return 0;
}