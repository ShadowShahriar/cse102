#include <stdio.h>

int sum(int a, int b)
{
	return b == 0 ? a : sum(a, b - 1) + 1;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d", a, b, sum(a, b));
	return 0;
}