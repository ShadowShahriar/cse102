#include <stdio.h>

int main()
{
	int arr[] = {12, 5, 10, 9, 7, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, temp;

	printf("Array before sorting: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\nArray after sorting: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}