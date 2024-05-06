#include <stdio.h>

int main()
{
	int a, b, sum;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("The sum of these numbers: %d", sum);
	return 0;
}