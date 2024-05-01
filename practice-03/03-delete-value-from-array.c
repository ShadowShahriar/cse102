#include <stdio.h>

int findElement(int arr[], int N, int target)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == target)
			return i;
	return -1;
}

int deleteElement(int arr[], int N, int target)
{
	int position = findElement(arr, N, target);
	if (position == -1)
	{
		printf("Element not found");
		return N;
	}

	for (int i = position; i < N - 1; i++)
		arr[i] = arr[i + 1];

	return N - 1;
}

int main()
{
	int arr[] = {10, 50, 20, 42, 30};
	int N = sizeof(arr) / sizeof(arr[0]);
	printf("Given array:\t");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);

	int target = 42;
	int delN = deleteElement(arr, N, target);
	printf("\nNew array:\t");
	for (int i = 0; i < delN; i++)
		printf("%d ", arr[i]);

	return 0;
}