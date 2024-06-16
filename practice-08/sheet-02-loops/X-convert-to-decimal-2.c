#include <stdio.h>
#include <math.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	while (T--)
	{
		long long N = 0;
		long long O = 0;
		long long D = 0;
		scanf("%lld", &N);
		while (N != 0)
		{
			int R = N % 2;
			if (R == 1)
				O++;
			N /= 2;
		}
		for (long long I = 0; I < O; I++)
			D += pow(2, I);
		printf("%lld\n", D);
	}
	return 0;
}