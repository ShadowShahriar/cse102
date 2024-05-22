#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int arr1[n];
	int arr2[n];
	int arr3[n];
	int neg = 0;
	int pos = 0;
	int zero = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			arr1[neg++] = arr[i];
		else if (arr[i] > 0)
			arr2[pos++] = arr[i];
		else
			arr3[zero++] = arr[i];
	}

	for (int i = 0; i < neg; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (int i = 0; i < pos; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (int i = 0; i < zero; i++)
		printf("%d ", arr3[i]);
	return 0;
}