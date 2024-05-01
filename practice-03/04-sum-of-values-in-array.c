#include <stdio.h>

int sum(int arr[], int N)
{
	int result = 0;
	for (int i = 0; i < N; i++)
		result += arr[i];
	return result;
}

int main()
{
	int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
	int N = sizeof(arr) / sizeof(arr[0]);
	int result = sum(arr, N);

	printf("Sum: %d", result);
	return 0;
}