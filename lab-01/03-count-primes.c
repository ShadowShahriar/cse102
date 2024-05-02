#include <stdio.h>
int isPrime(int num)
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
	int m = 0, n = 0, count = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; ++i)
		if (isPrime(i))
			count++;
	printf("%d", count);
	return 0;
}