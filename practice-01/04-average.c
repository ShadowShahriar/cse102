/*
 * This C program takes 4 values as
 * input, stores them in variables, and
 * calculates their average.
 */

#include <stdio.h>

int main()
{
	float a, b, c, d, average;
	printf("Enter 4 numbers: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	average = (a + b + c + d) / 4;
	printf("The average value of the given numbers is %.2f", average);
}