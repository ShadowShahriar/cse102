/*
 * This C program takes a value as
 * input, stores in a variable, and
 * prints it to the terminal.
 */

#include <stdio.h>

int main()
{
	int value;
	printf("Please enter a number: ");
	scanf("%d", &value);
	printf("The number you have given is: %d", value);
}