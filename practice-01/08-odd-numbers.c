/*
 * This C program takes two number
 * as input and print the odd numbers
 * in-between (including the given two)
 */

#include <stdio.h>

int main()
{
	int min, max;
	printf("Enter a minimum and a maximum value: ");
	scanf("%d %d", &min, &max);

	printf("The odd numbers in the [%d, %d] range are:\n", min, max);
	for (int i = min; i <= max; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}