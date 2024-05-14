#include <stdio.h>

int main()
{
	int a[] = {3, 12, 24, 48, 61, 162};
	int N = sizeof(a) / sizeof(a[0]);
	int b[N];

	for (int i = 0; i < N; i++)
		b[i] = a[i];

	printf("Given Array: ");
	for (int x = 0; x < N; x++)
		printf("%d ", a[x]);

	printf("\nNew Array: ");
	for (int y = 0; y < N; y++)
		printf("%d ", b[y]);
	return 0;
}