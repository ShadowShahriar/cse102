#include <stdio.h>
#define max 5

int main()
{
	int arr[max] = {0};
	int *ptr = arr;

	printf("Enter %d elements in the array: ", max);
	while (ptr < &arr[max])
	{
		scanf("%d", ptr);
		ptr++;
	}
	ptr = arr;

	printf("Elements in the array are    : ");
	for (int i = 0; i < max; i++)
		printf("%d ", *(ptr + i));

	return 0;
}