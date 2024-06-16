#include <stdio.h>
int main()
{
	int K = 0;
	int S = 0;
	scanf("%d %d", &K, &S);

	int N = 0;
	for (int X = 0; X <= K; X++)
		for (int Y = 0; Y <= K; Y++)
		{
			int Z = S - (X + Y);
			if (0 <= Z && Z <= K)
				N++;
		}
	printf("%d", N);
	return 0;
}