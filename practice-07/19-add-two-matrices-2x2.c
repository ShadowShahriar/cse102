#include <stdio.h>
#define rows 2
#define columns 2

int main()
{
	int A[rows][columns]; // Matrix A
	int B[rows][columns]; // Matrix B
	int C[rows][columns]; // Matrix A + Matrix B
	int row, column;

	printf("Enter elements of Matrix A: ");
	for (row = 0; row < rows; row++)
		for (column = 0; column < columns; column++)
			scanf("%d", &A[row][column]);

	printf("Enter elements of Matrix B: ");
	for (row = 0; row < rows; row++)
		for (column = 0; column < columns; column++)
			scanf("%d", &B[row][column]);

	for (row = 0; row < rows; row++)
		for (column = 0; column < columns; column++)
			C[row][column] = A[row][column] + B[row][column];

	printf("\nElements of Matrix C (A + B):\n");
	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
			printf("%d\t", C[row][column]);
		printf("\n");
	}

	return 0;
}