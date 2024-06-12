#include <stdio.h>
int main()
{
	long long n = 0;
	scanf("%lld", &n);

	for (long long i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%lld\n", i);
	return 0;
}