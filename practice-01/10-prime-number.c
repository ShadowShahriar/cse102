/*
 * This C program checks whether
 * a number is prime or not.
 */

#include <stdio.h>

int main()
{
	int number, factors = 0;
	printf("Enter a number to check whether it is prime or not: ");
	scanf("%d", &number);

	if (number <= 1)
	{
		printf("%d is Definitely NOT a prime number.", number);
		return 0;
	}

	for (int i = 2, max = number / 2; i <= max; i++)
	{
		if (number % i == 0)
		{
			factors++;
		}
	}

	if (factors == 0)
	{
		printf("The number %d has no factors other than 1 and %d itself.\nTherefore, it IS a Prime Number.", number, number);
	}
	else
	{
		printf("The number %d has %d factors other than 1 and %d itself.\nTherefore, %d is NOT a Prime Number.", number, factors, number);
	}

	return 0;
}