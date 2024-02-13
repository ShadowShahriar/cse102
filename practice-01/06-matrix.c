/*
 * This C program takes 9 digits
 * as input and prints them in a
 * 3×3 matrix structure.
 */

#include <stdio.h>

int main()
{
	unsigned int a, b, c, d, e, f, g, h, i;
	printf("Enter 9 digits between 0 to 999: ");
	scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
	printf("%3d %3d %3d\n%3d %3d %3d\n%3d %3d %3d", a, b, c, d, e, f, g, h, i);
	return 0;
}