#include <stdio.h>
#define length 5

int main()
{
	int array[length];
	int i = 0;

	printf("Enter the array elements:\n");
	for (i = 0; i < length; i++)
		scanf("%d", array + i);

	printf("\nThe elements are:");
	for (i = 0; i < length; i++)
		printf("\n%d", *(array + i));

	return 0;
}