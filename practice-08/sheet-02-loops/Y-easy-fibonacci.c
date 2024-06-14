#include <stdio.h>
long long fib(long long n)
{
	long long a = 0;
	long long b = 1;
	long long c = 0;
	long long i = 0;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	long long n = 0;
	scanf("%lld", &n);
	for (long long i = 0; i < n; i++)
		printf("%lld ", fib(i));
	return 0;
}