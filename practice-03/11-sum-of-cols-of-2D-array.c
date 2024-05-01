#include <stdio.h>
#define rows 3
#define columns 3

int main()
{
	int arr[rows][columns];
	printf("Enter the elements of a 2D Array: ");
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			scanf("%d", &arr[i][j]);

	printf("Elements in a %dx%d matrix:\n", rows, columns);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	printf("\nSum of individual columns:\n");
	for (int i = 0; i < columns; i++)
	{
		int sumColumns = 0;
		for (int j = 0; j < rows; j++)
			sumColumns += arr[j][i];
		printf("Column %d: %d\n", i, sumColumns);
	}

	return 0;
}