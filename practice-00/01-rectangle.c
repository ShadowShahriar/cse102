/*
 * This C program prints a rectangle
 * pattern made with a unicode character.
 */

#include <stdio.h>

int main()
{
	int width, height;
	printf("Enter the width of the rectangle: ");
	scanf("%d", &width);
	printf("Enter the height of the rectangle: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			printf("█");
		printf("\n");
	}

	return 0;
}