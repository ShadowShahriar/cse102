#include <stdio.h>

int main()
{
	float width, height, area;
	scanf("%f %f", &width, &height);

	area = 0.5 * width * height;
	printf("%d", (int)area);
	return 0;
}