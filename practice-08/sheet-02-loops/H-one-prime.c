#include <stdio.h>
int isPrime(long long num)
{
	if (num < 2)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	for (int i = 2; i * i <= num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main()
{
	long long n = 0;
	scanf("%lld", &n);
	if (isPrime(n))
		printf("YES");
	else
		printf("NO");
	return 0;
}