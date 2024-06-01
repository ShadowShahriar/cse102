#include <stdio.h>

// === Size of Matrix A ===
#define R1 3
#define C1 2

// === Size of Matrix B ===
#define R2 2
#define C2 3

int main()
{
	int i, j, k;
	int MatrixA[R1][C1] = {{1, 1}, {2, 2}, {3, 3}};
	int MatrixB[R2][C2] = {{1, 1, 1}, {2, 2, 2}};
	int MatrixC[R1][C2];

	if (C1 != R2)
	{
		printf("The number of columns in Matrix A must be equal to the number of rows in Matrix B.");
		return 1;
	}

	printf("\nMatrix A:\n");
	for (i = 0; i < R1; i++)
	{
		for (j = 0; j < C1; j++)
			printf("%d\t", MatrixA[i][j]);
		printf("\n");
	}

	printf("\nMatrix B:\n");
	for (i = 0; i < R2; i++)
	{
		for (j = 0; j < C2; j++)
			printf("%d\t", MatrixB[i][j]);
		printf("\n");
	}

	printf("\nMatrix C (Matrix A × Matrix B):\n");
	for (i = 0; i < R1; i++)
	{
		for (j = 0; j < C2; j++)
		{
			MatrixC[i][j] = 0;
			for (k = 0; k < R2; k++)
				MatrixC[i][j] += MatrixA[i][k] * MatrixB[k][j];
			printf("%d\t", MatrixC[i][j]);
		}
		printf("\n");
	}
	return 0;
}