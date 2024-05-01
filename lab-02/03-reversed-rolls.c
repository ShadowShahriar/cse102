#include <stdio.h>

int main()
{
	int n = 0;
	printf("Input value of n: ");
	scanf("%d", &n);

	int array[n];
	int reversed[n];
	int m = n - 1;
	printf("Input rolls of students on the list: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
		reversed[m - i] = array[i];
	}

	printf("Reversed rolls of students on the list: ");
	for (int j = 0; j < n; j++)
		printf("%d ", reversed[j]);

	return 0;
}
