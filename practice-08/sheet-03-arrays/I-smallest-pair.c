#include <stdio.h>
#include <limits.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	while (T--)
	{
		long long I = 0;
		long long J = 0;
		long long N = 0;
		scanf("%lld", &N);

		long long A[N];
		for (I = 0; I < N; I++)
			scanf("%lld", &A[I]);

		long long X = INT_MAX;
		long long Y = 0;
		for (I = 0; I < N; I++)
			for (J = I + 1; J < N; J++)
			{
				Y = A[I] + A[J] + J - I;
				if (Y < X)
					X = Y;
			}
		printf("%lld\n", X);
	}
	return 0;
}