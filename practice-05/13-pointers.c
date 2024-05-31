#include <stdio.h>

int main()
{
	int a = 42;
	int *b = &a;

	printf("given, a = %d\n", a);
	printf("address of a (&a) = %u\n", &a);
	printf("address of a (b)  = %u\n", b);
	printf("value of b        = %u\n", b);

	printf("value of a (*b)   = %u\n", *b);
	printf("value of a *(&a)  = %u", *(&a));

	return 0;
}