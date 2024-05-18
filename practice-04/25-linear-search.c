#include <stdio.h>
#include <limits.h>

int linearSearch(int arr[], int N, int target)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == target)
			return i;
	return -1;
}

int main()
{
	int n = 0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];

	printf("Enter the elements of the array: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter the number you are looking for: ");
	int target = INT_MIN;
	scanf("%d", &target);

	int found = linearSearch(arr, n, target);
	if (found == -1)
		printf("Element not found");
	else
		printf("Element found at index %d", found);

	return 0;
}