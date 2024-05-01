#include <stdio.h>
#define rows 2
#define columns 3

const int matrix[rows][columns] = {{1, 2, 4}, {3, 5, 6}};

int main()
{
	printf("Given matrix:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}

	printf("\nTranspose matrix:\n");
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
			printf("%d ", matrix[j][i]);
		printf("\n");
	}

	return 0;
}