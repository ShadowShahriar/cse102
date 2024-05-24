/*
 * This C program prints a half-pyramid
 * pattern (Right-to-Left) made with
 * asterisks.
 */

#include <stdio.h>

int main()
{
	int l;
	printf("Enter the length of the pyramid: ");
	scanf("%d", &l);

	for (int i = 1; i <= l; i++)
	{
		for (int k = l; k > i; k--)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}