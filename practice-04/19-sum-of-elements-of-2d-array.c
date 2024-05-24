#include <stdio.h>
#define rows 3
#define columns 3

int sum(int *arr)
{
	int sumtotal = 0;
	int size = rows * columns;
	printf("Given %dx%d matrix:\n", rows, columns);

	for (int i = 0; i < size; i++)
	{
		int num = arr[i];
		printf("%d\t", num);
		sumtotal += num;

		if ((i + 1) % rows == 0)
			printf("\n");
	}

	return sumtotal;
}

int main()
{
	int arr[rows][columns];
	printf("Enter the elements of a 2D Array: ");
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			scanf("%d", &arr[i][j]);

	printf("\nSum of all elements in the given matrix: %d", sum(*arr));
	return 0;
}