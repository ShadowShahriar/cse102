#include <stdio.h>

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%dth Fibonacci Term = %d", n, fibonacci(n));

	return 0;
}