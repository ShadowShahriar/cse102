#include <stdio.h>
int main()
{
	long long t = 0;
	scanf("%lld", &t);
	for (long long i = 0; i < t; i++)
	{
		long long n = 0;
		long long r = 0;
		scanf("%lld", &n);
		if (n == 0)
			printf("0");
		else
		{
			while (n != 0)
			{
				r = n % 10;
				n /= 10;
				printf("%lld ", r);
			}
		}
		printf("\n");
	}
	return 0;
}