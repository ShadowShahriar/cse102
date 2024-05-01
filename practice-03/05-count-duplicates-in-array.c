#include <stdio.h>

int countDuplicates(int arr[], int N)
{
	int count = 0;
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] == arr[j])
			{
				count++;
				break;
			}

	return count;
}

int main()
{
	int arr[10] = {1, 1, 2, 1, 5, 5, 7, 9, 1, 12};
	int N = sizeof(arr) / sizeof(arr[0]);
	int duplicates = countDuplicates(arr, N);

	printf("Number of duplicates: %d", duplicates);
	return 0;
}