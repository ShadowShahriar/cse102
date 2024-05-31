#include <stdio.h>

int factorial(int n)
{
	int fact = 1;
	if (n > 1)
		fact = factorial(n - 1) * n;
	return fact;
}

int main()
{
	int n = 4;
	printf("%d! = %d", n, factorial(n));
	return 0;
}