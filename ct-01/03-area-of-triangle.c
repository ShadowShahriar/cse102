#include <stdio.h>

int main()
{
	float base, height, area;
	scanf("%f %f", &base, &height);

	area = 0.5 * base * height;
	printf("Area is %.3f square units", area);
	return 0;
}