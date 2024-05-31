#include <stdio.h>
#define rows 3
#define columns 3

int main()
{
	int A[rows][columns]; // Matrix A
	int B[rows][columns]; // Matrix B
	int C[rows][columns]; // Matrix A + Matrix B
	int row, column;
	int flag = 0;

	printf("Enter elements of Matrix A: ");
	for (row = 0; row < rows; row++)
		for (column = 0; column < columns; column++)
			scanf("%d", &A[row][column]);

	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
			printf("%d\t", A[row][column]);
		printf("\n");
	}

	printf("\nEnter elements of Matrix B: ");
	for (row = 0; row < rows; row++)
		for (column = 0; column < columns; column++)
			scanf("%d", &B[row][column]);

	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
			printf("%d\t", B[row][column]);
		printf("\n");
	}

	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
		{
			if (A[row][column] != B[row][column])
			{
				flag = 1;
				break;
			}
		}
	}
	printf("\n");
	if (flag == 0)
		printf("Two matrices are equal (A = B)");
	else
		printf("Two matrices are NOT equal (A ≠ B)");

	return 0;
}