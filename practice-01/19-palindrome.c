/*
 * This C program checks whether
 * a number is palindrome or not.
 */

#include <stdio.h>

int main()
{
	int number, temp, reversed = 0, remainder;
	printf("Enter a number: ");
	scanf("%d", &number);
	temp = number;

	while (temp != 0)
	{
		remainder = temp % 10;
		reversed = reversed * 10 + remainder;
		temp /= 10;
	}

	if (number == reversed)
		printf("%d is a Palindrome number.", number);
	else
		printf("%d is NOT a Palindrome number.", number);

	return 0;
}