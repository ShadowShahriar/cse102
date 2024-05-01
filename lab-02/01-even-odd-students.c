#include <stdio.h>

int main()
{
	int n = 0;
	printf("Input value of n: ");
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; i++)
	{
		int value = 0;
		scanf("%d", &value);
		array[i] = value;
	}

	int evenCount = 0, oddCount = 0;
	for (int j = 0; j < n; j++)
	{
		int number = array[j];
		if (number % 2 == 0)
			evenCount++;
		else
			oddCount++;
	}

	printf("Total odd students: %d\n", oddCount);
	printf("Total even students: %d\n", evenCount);
	return 0;
}
