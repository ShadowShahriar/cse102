/*
 * This C program prints a hollow
 * rectangle made with unicode
 * characters.
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
		{
			if (i == 0 && j == 0) // top-left corner
				printf("┌");
			else if (i == 0 && j == width - 1) // top-right corner
				printf("┐");
			else if (i == height - 1 && j == 0) // bottom-left corner
				printf("└");
			else if (i == height - 1 && j == width - 1) // bottom-right corner
				printf("┘");
			else if (i == 0 || i == height - 1) // horizontal edges
				printf("─");
			else if (j == 0 || j == width - 1) // vertical edges
				printf("│");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}