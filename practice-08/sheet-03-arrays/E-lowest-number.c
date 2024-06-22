#include <stdio.h>
#include <limits.h>
int main()
{
	long long L = LLONG_MAX;
	long long I = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long A[N];
	for (I = 0; I < N; I++)
		scanf("%lld", &A[I]);

	for (I = 0; I < N; I++)
		if (A[I] < L)
			L = A[I];
	printf("%lld ", L);

	for (I = 0; I < N; I++)
		if (A[I] == L)
		{
			printf("%lld", ++I);
			break;
		}
	return 0;
}