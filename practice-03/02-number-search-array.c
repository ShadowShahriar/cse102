#include <stdio.h>

int linearSearch(int arr[], int N, int target)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == target)
			return i;
	return -1;
}

int main()
{
	int arr[] = {5, 2, 8, 12, 3};
	int N = sizeof(arr) / sizeof(arr[0]);
	int target = 8;

	int found = linearSearch(arr, N, target);
	if (found == -1)
		printf("Element not found");
	else
		printf("Element found at index %d", found);

	return 0;
}