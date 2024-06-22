#include <stdio.h>
int main()
{
	long long I = 0;
	long long J = 0;
	long long K = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long A[N];
	for (I = 0; I < N; I++)
		scanf("%lld", &A[I]);

	for (I = 0; I < N; I++)
		for (J = I + 1; J < N; J++)
		{
			if (A[I] > A[J])
			{
				K = A[I];
				A[I] = A[J];
				A[J] = K;
			}
		}

	for (I = 0; I < N; I++)
		printf("%lld ", A[I]);
	return 0;
}