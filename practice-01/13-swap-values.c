/*
 * This C program takes two
 * numbers and swap their values.
 */

#include <stdio.h>

int main()
{
	float a, b, c;

	printf("Enter the first value: ");
	scanf("%f", &a);

	printf("Enter the second value: ");
	scanf("%f", &b);

	c = a;
	a = b;
	b = c;

	printf("After swapping,\n The first value: %.2f\n The second value: %.2f", a, b);
	return 0;
}