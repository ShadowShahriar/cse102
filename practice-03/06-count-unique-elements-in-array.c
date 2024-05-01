#include <stdio.h>
int countDistinct(int arr[], int N)
{
	int i, j, count = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
			count++;
	}
	return count;
}

int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the Array elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int count = countDistinct(arr, n);
	printf("There are %d distinct element(s) in the array.", count);
	return 0;
}