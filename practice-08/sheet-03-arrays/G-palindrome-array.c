#include <stdio.h>
int main()
{
	long long I = 0;
	long long N = 0;
	scanf("%lld", &N);

	long long A[N];
	long long B[N];
	for (I = 0; I < N; I++)
	{
		scanf("%lld", &A[I]);
		B[N - I - 1] = A[I];
	}

	int palindrome = 1;
	for (I = 0; I < N; I++)
	{
		if (A[I] != B[I])
		{
			palindrome = 0;
			break;
		}
	}

	palindrome ? printf("YES") : printf("NO");
	return 0;
}