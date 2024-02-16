/*
 * This C program prints the
 * Fibonacci series up to nth
 * term.
 */

#include <stdio.h>

int main()
{
	int t1 = 0, t2 = 1;
	int tMax, tNext = t1 + t2;

	printf("Enter the number of terms: ");
	scanf("%d", &tMax);

	printf("The Fibonacci series up to %dth term: %d, %d", tMax, t1, t2);
	for (int i = 3; i <= tMax; i++)
	{
		printf(", %d", tNext);
		t1 = t2;
		t2 = tNext;
		tNext = t1 + t2;
	}

	return 0;
}