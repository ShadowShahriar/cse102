/*
 * This C program takes two
 * integers and swap their values
 * without using a third variable.
 */

#include <stdio.h>

int main()
{
	int a, b;

	printf("Enter the first value: ");
	scanf("%d", &a);

	printf("Enter the second value: ");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping,\n The first value: %d\n The second value: %d", a, b);
	return 0;
}