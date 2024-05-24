/*
 * This C program prints an inverted
 * half-pyramid pattern (Right-to-Left)
 * made with asterisks.
 */

#include <stdio.h>

int main()
{
	int l;
	printf("Enter the length of the pyramid: ");
	scanf("%d", &l);

	for (int i = 1; i <= l; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			if (j < i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}