/*
 * In Mathematics, the LCM is the smallest
 * or least positive non-zero integer that
 * is divisible by two or more numbers.
 * This C program takes two numbers as
 * input and find their LCM.
 */

#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	c = (a > b) ? a : b;

	while (1)
	{
		if ((c % a == 0) && (c % b == 0))
		{
			printf("The LCM of %d and %d is: %d", a, b, c);
			break;
		}
		c++;
	}
	return 0;
}