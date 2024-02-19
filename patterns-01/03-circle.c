#include <stdio.h>

int main()
{
	int radius;
	printf("Enter the radius: ");
	scanf("%d", &radius);

	// check if the radius is too small
	if (radius < 2)
		radius = 2;

	// calculate the bounding rectangle for the circle
	int rect = 2 * radius + 1;

	// the cartesian coordinates that construct the circle
	int x, y;

	for (int i = 0; i < rect; i++)
	{
		for (int j = 0; j < rect; j++)
		{
			// start from the left most corner
			x = i - radius;
			y = j - radius;

			// if (x^2 + y^2 < r^2) then the point is inside the circle
			if (x * x + y * y <= radius * radius + 1)
				printf("██");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}