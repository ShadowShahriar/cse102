#include <stdio.h>

void printNaturalNumbers(int m, int n)
{
	printf("%d ", m);
	if (m < n)
		printNaturalNumbers(++m, n);
}

int main()
{
	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	printNaturalNumbers(1, n);
	return 0;
}