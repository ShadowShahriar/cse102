/*
 * This C program prints an inverted
 * half-pyramid pattern made with asterisks.
 */

#include <stdio.h>

int main()
{
	int l;
	printf("Enter the length of the pyramid: ");
	scanf("%d", &l);

	for (int i = l; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}