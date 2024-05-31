#include <stdio.h>
#define rows 3
#define columns 3

int main()
{
	int sum = 0;
	int arr[rows][columns];
	int i, j;
	printf("Enter the elements of a 2D Array: ");
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			scanf("%d", &arr[i][j]);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			sum += arr[i][j];

	printf("\nSum of all elements in the given matrix is %d", sum);
	return 0;
}