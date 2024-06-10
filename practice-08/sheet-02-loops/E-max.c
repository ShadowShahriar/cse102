#include <stdio.h>
#include <limits.h>
int main()
{
	long long n = LLONG_MIN;
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		long long i = 0;
		scanf("%lld", &i);
		if (i > n)
			n = i;
	}
	printf("%lld", n);
	return 0;
}