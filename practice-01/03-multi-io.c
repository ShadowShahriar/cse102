/*
 * This C program takes 4 values as
 * input, stores them in variables, and
 * prints them to the terminal in order.
 */

#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("Enter 4 numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("The numbers you have entered are %d, %d, %d, and %d", a, b, c, d);
}