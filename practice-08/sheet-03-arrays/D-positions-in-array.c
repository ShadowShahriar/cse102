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
		if (A[I] <= 10)
			printf("A[%lld] = %lld\n", I, A[I]);
	return 0;
}