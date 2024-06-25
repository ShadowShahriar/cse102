#include <stdio.h>
#include <limits.h>

int main()
{
	long long L = LLONG_MAX;
	long long I = 0;
	long long N = 0;
	long long K = 0;
	scanf("%lld", &N);

	long long A[N];
	for (I = 0; I < N; I++)
	{
		scanf("%lld", &A[I]);
		if (A[I] < L)
			L = A[I];
	}

	for (I = 0; I < N; I++)
		if (A[I] == L)
			K++;

	if (K % 2 == 0)
		printf("Unlucky");
	else
		printf("Lucky");
	return 0;
}