#include <stdio.h>
int main()
{
	long long I = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long A[N];
	for (I = 0; I < N; I++)
		scanf("%lld", &A[I]);

	for (I = 0; I < N; I++)
		printf("%lld ", A[N - I - 1]);
	return 0;
}