/*
 * This C program takes a few numbers
 * as input and prints the average of it.
 */

#include <stdio.h>

int main()
{
	int n;
	float sum = 0, average;
	printf("Enter the number of inputs: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int value;
		printf("Enter digit %d: ", i + 1);
		scanf("%d", &value);
		sum += value;
	}

	average = sum / n;
	printf("The average of these numbers: %.3f", average);
	return 0;
}