#include <stdio.h>
#define SIZE_MAX 100

int main()
{
	int n = 0;
	int arr[SIZE_MAX] = {0};
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("\n");
	printf("Current elements in the array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	int elem = 0;
	int idx = 0;
	printf("\n");
	printf("Enter the new element and index number: ");
	scanf("%d %d", &elem, &idx);

	if (idx < 0 || idx > n)
	{
		printf("Index out of the range: [0, %d]", n);
		return 1;
	}

	for (int i = n - 1; i >= 0; i--)
		if (i > idx - 1)
			arr[i + 1] = arr[i];
	arr[idx] = elem;

	printf("\n");
	printf("Array after adding the element: ");
	for (int i = 0; i <= n; i++)
		printf("%d ", arr[i]);

	return 0;
}