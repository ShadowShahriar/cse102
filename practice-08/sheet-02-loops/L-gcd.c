#include <stdio.h>
int main()
{
	long long a = 0;
	long long b = 0;
	long long max = 0;
	long long gcd = 0;
	scanf("%lld %lld", &a, &b);

	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	max = (a > b) ? a : b;

	for (long long i = 1; i <= max; i++)
		if (a % i == 0 && b % i == 0)
			gcd = i;

	printf("%lld", gcd);
	return 0;
}