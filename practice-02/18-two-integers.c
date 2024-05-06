#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two integers: ");

	if (scanf("%d %d", &a, &b))
		printf("Accepted integer values: %d, %d", a, b);
	else
		printf("Input not accepted!");
}