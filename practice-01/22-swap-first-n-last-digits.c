/*
 * This C program takes a number
 * and swap the first and last
 * digit of that number.
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	printf("Enter an integer: ");
	scanf("%d", &number);

	int numtemp = number, numlen = 0;
	while (numtemp != 0)
	{
		numtemp /= 10;
		numlen++;
	}

	int shift = pow(10, numlen - 1);
	int digit_last = number % 10;
	int digit_first = number / shift;
	int middle_digits = (number % (int)shift) / 10;

	int swapped = digit_last * shift + middle_digits * 10 + digit_first;
	printf("The swapped number is: %d", swapped);
	return 0;
}