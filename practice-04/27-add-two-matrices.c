#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define columns 3

int* scanfMatrix(int size, char name){
	int *matrix = (int *)malloc(sizeof(int) * (size + 1));
	printf("Enter the elements of a %dx%d Matrix named %c: ", rows, columns, name);
	for(int i = 0; i < size; i++)
		scanf("%d", &matrix[i]);

	printf("Elements of the Matrix:\n");
	for(int j = 0; j < rows; j++){
		for(int k = 0; k < columns; k++)
			printf("%d\t", matrix[rows * j + k]);
		printf("\n");
	}

	printf("\n");
	return matrix;
}

int main(){
	int size = rows * columns;
	int* mA;
	int* mB;
	int i, j;

	// input the elements in a 1D array using pointers
	mA = scanfMatrix(size, 'A');
	mB = scanfMatrix(size, 'B');

	// add the elements into 2D arrays
	int MatrixA[rows][columns];
	int MatrixB[rows][columns];
	for(i = 0; i < rows; i++)
		for(j = 0; j < columns; j++){
			int index = rows * i + j;
			MatrixA[i][j] = mA[index];
			MatrixB[i][j] = mB[index];
		}

	// MatrixA + MatrixB = Matrix C
	int MatrixC[rows][columns];
	for(i = 0; i < rows; i++)
		for(j = 0; j < columns; j++)
			MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];

	// Print Matrix C
	printf("Matrix A + Matrix B =\n");
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++)
			printf("%d\t", MatrixC[i][j]);
		printf("\n");
	}

	return 0;
}