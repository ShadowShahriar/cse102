#include <stdio.h>
int main()
{
	long long I = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long arr[N];
	for (I = 0; I < N; I++)
		scanf("%lld", &arr[I]);

	for (I = 0; I < N; I++)
	{
		if (arr[I] < 0)
			arr[I] = 2;
		else if (arr[I] > 0)
			arr[I] = 1;
	}

	for (I = 0; I < N; I++)
		printf("%lld ", arr[I]);
	return 0;
}