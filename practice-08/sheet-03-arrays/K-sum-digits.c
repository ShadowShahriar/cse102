#include <stdio.h>
int main()
{
	long long N = 0;
	scanf("%lld", &N);

	char M[N];
	scanf("%s", &M);

	long long S = 0;
	for (long long I = 0; I < N; I++)
		S += M[I] - '0';
	printf("%lld", S);
	return 0;
}