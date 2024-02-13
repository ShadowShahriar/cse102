/*
 * This C program takes the base
 * and height of a triangle and
 * prints the area of it.
 */

#include <stdio.h>

int main()
{
	float base, height, area;
	printf("Enter the base of the triangle: ");
	scanf("%f", &base);
	printf("Enter the height of the triangle: ");
	scanf("%f", &height);

	area = 0.5 * base * height;
	printf("The area of the triangle is %.3f square units", area);
	return 0;
}