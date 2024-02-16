/*
 * In Mathematics, the HCF is the largest
 * positive integer that divides two numbers
 * without leaving a remainder. This C program
 * takes two numbers as input and find their
 * HCF.
 */

#include <stdio.h>

int main()
{
	int a, b, max, hcf;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	// handle negative integers
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;

	// store the max number between a and b
	max = (a > b) ? a : b;

	for (int i = 1; i <= max; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			hcf = i;
		}
	}

	printf("The HCF of %d and %d is: %d", a, b, hcf);
	return 0;
}