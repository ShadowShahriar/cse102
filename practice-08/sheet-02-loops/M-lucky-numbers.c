#include <stdio.h>
int flag = 0;
int isLucky(long long n)
{
	long long r = 0;
	while (n != 0)
	{
		r = n % 10;
		n /= 10;
		if (r != 4 && r != 7)
			return 0;
	}
	flag = 1;
	return 1;
}

int main()
{
	long long A = 0;
	long long B = 0;
	scanf("%lld %lld", &A, &B);
	for (long long N = A; N <= B; N++)
		if (isLucky(N))
			printf("%lld ", N);
	if (flag == 0)
		printf("-1");
	return 0;
}