#include <stdio.h>

int main()
{
	int n = 0;
	printf("Enter the size of the array (>1): ");
	scanf("%d", &n);
	float arr[n];
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		printf("Element %d: ", i + 1);
		scanf("%f", &arr[i]);
	}

	for (int i = 0; i < n; i++)
		sum += arr[i];

	printf("\nSum of these elements: %.2f", sum);
	return 0;
}