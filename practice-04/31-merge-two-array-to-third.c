#include <stdio.h>
#include <stdlib.h>

int inputSize(int a){
	int n = 0;
	printf("Enter the size of Array %d: ", a);
	scanf("%d", &n);
	return n;
}

int* inputArray(int size){
	printf("Enter the elements of the array: ");
	int *arr = (int *)malloc(sizeof(int) * (size + 1));
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("\n");
	return arr;
}

int main(){
	int n1 = inputSize(1);
	int *arr1 = inputArray(n1);

	int n2 = inputSize(2);
	int *arr2 = inputArray(n2);

	int n3 = n1 + n2;
	int arr3[n3];
	int i;

	printf("Array 1: ");
	for(i = 0; i < n1; i++){
		printf("%d ", arr1[i]);
		arr3[i] = arr1[i];
	}

	printf("\nArray 2: ");
	for(i = 0; i < n2; i++){
		printf("%d ", arr2[i]);
		arr3[n1 + i] = arr2[i];
	}

	printf("\nNew merged array: ");
	for(i = 0; i < n3; i++)
		printf("%d ", arr3[i]);

	return 0;
}