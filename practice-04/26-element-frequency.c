#include <stdio.h>
#define SIZE_MAX 100

int getHits(int arr[], int target, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == target)
			count++;
	return count;
}

int *getIntegerSet(int arr[], int n)
{
	int i, j, count = 0;
	int temp[n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
			temp[count++] = arr[i];
	}

	int *set = (int *)malloc(count);
	for (i = 0; i < count; i++)
		set[i] = temp[i];
	return set;
}

int main()
{
	int array[SIZE_MAX] = {0};
	int freq[SIZE_MAX] = {0};

	int n = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &array[i]);
	}

	int *set = getIntegerSet(array, n);
	int count = sizeof(set) / sizeof(set[0]);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		int num = set[i];
		int hits = getHits(array, num, n);
		if (hits > 0)
			printf("%d appeared %d times\n", num, hits);
	}

	return 0;
}