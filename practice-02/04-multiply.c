#include <stdio.h>

int main()
{
	int a, b, result;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	result = a * b;
	printf("a * b = %d", result);
	return 0;
}