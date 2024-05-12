#include <stdio.h>
#define PI 3.1416

float diameter(float radius)
{
	return radius * 2;
}

float circumference(float radius)
{
	return 2 * PI * radius;
}

float area(float radius)
{
	return PI * (radius * radius);
}

int main()
{
	float r = 0;
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);

	printf("\nDiameter: \t%6.3f units", diameter(r));
	printf("\nCircumference: \t%6.3f units", circumference(r));
	printf("\nArea: \t\t%6.3f square units", area(r));
	return 0;
}