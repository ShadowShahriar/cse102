#include <stdio.h>
void myFunction(int arr[], int size)
{
	int resultArr[size];
	for (int i = 0; i < size; i++)
	{
		resultArr[i] = arr[size - i - 1];
	}

	printf("Output: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", resultArr[i]);
	}
}

int main()
{
	int originalArr[] = {1, 2, 3, 4, 5};
	myFunction(originalArr, 5); // "Output: 5 4 3 2 1 "
	return 0;
}