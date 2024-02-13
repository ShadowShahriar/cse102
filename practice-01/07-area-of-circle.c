/*
 * This C program takes the radius
 * of a circle and prints the area
 * of it.
 */

#include <stdio.h>
#define PI 3.1416

int main()
{
	float radius, area;
	printf("Enter the radius: ");
	scanf("%f", &radius);

	area = PI * (radius * radius);
	printf("The area of the circle is %.3f square units", area);
	return 0;
}