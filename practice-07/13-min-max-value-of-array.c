#include <limits.h>
#include <stdio.h>

void findMinMax(int arr[], int N)
{
	int minVal = INT_MAX;
	int maxVal = INT_MIN;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < minVal)
			minVal = arr[i];
		if (arr[i] > maxVal)
			maxVal = arr[i];
	}

	printf("Minimum value: %d", minVal);
	printf("\nMaximum value: %d", maxVal);
	return;
}

int main()
{
	int arr[] = {13, 72, 128, 16, 9, 32};
	int N = sizeof(arr) / sizeof(arr[0]);

	findMinMax(arr, N);
	return 0;
}