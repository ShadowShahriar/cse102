/*
 * This C program takes a number
 * and reverse the digits of that
 * number.
 */

#include <stdio.h>

int main()
{
	int number, reverse = 0, remainder;
	printf("Enter an integer: ");
	scanf("%d", &number);

	while (number != 0)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}

	printf("The reversed number is %d", reverse);
	return 0;
}