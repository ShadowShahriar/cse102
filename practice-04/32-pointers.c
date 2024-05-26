#include <stdio.h>

int main()
{
	int n = 42;
	int *ptr;
	ptr = &n;

	printf("Current n: %d\n", n);
	printf("Current n (via pointer): %d\n", *ptr);

	*ptr = 13;
	printf("New n: %d", n);
	return 0;
}