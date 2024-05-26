#include <stdio.h>
int main()
{
	int n = 5, array[n], i = 0;
	printf("Enter the array elements:\n");
	for (i = 0; i < n; i++)
		scanf("%d", array + i);

	printf("\nThe elements are:");
	for (i = 0; i < n; i++)
		printf("\n%d", *(array + i));

	return 0;
}