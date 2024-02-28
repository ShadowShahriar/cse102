#include <stdio.h>

int main()
{
	float a, b, c;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);

	if (a > b && a > c)
		printf("Maximum number: %f", a);
	else if (b > a && b > c)
		printf("Maximum number: %f", b);
	else if (c > a && c > b)
		printf("Maximum number: %f", c);

	return 0;
}
