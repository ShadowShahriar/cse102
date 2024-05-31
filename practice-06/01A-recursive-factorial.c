#include <stdio.h>

int factorial(int n)
{
	int fact;
	if (n > 1)
		fact = factorial(n - 1) * n;
	else
		fact = 1;
	return fact;
}

int main()
{
	int n = 4;
	printf("%d! = %d", n, factorial(n));
	return 0;
}