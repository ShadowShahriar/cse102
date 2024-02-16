/*
 * This C program finds the factorial
 * of a given integer.
 */

#include <stdio.h>

int main()
{
	int max, factorial;

	printf("Enter an integer: ");
	scanf("%d", &max);
	factorial = max;
	printf("The factorial of %d is ", max);

	while (--max)
		factorial *= max;

	printf("%d", factorial);
	return 0;
}