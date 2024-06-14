#include <stdio.h>
int main()
{
	char S = '+';
	int N = 0;
	scanf("%c", &S);
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int X = 0;
		scanf("%d", &X);
		for (int j = 0; j < X; j++)
			printf("%c", S);
		printf("\n");
	}
	return 0;
}