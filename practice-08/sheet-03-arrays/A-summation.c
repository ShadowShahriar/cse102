#include <stdio.h>
int main()
{
	long long I = 0;
	long long N = 0;
	long long S = 0;
	scanf("%lld", &N);

	long long arr[N];
	for (I = 0; I < N; I++)
	{
		long long X = 0;
		scanf("%lld", &X);
		arr[I] = X;
	}

	for (I = 0; I < N; I++)
		S += arr[I];
	if (S < 0)
		S *= -1;

	printf("%lld", S);
	return 0;
}