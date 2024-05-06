#include <stdio.h>

int main()
{
	float a, b, c;
	printf("Enter two numbers: ");
	scanf("%f %f", &a, &b);
	c = (a > b ? a : b);

	printf("The maximum value amongst %.2f and %.2f is %.2f", a, b, c);
	return 0;
}