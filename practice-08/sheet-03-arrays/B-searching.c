#include <stdio.h>
int main()
{
	long long P = -1;
	long long I = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long arr[N];
	for (I = 0; I < N; I++)
		scanf("%lld", &arr[I]);

	long long X = 0;
	scanf("%lld", &X);

	for (I = 0; I < N; I++)
		if (arr[I] == X)
		{
			P = I;
			break;
		}

	printf("%lld", P);
	return 0;
}