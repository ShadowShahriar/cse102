#include <stdio.h>
int main()
{
	int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
		if (arr[i] % 5 == 0)
			printf("%d ", i);

	return 0;
}