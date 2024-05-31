#include <stdio.h>

int main()
{
	int a = 13;
	int *b = &a;
	int **p = &b; // pointer to pointer

	printf("value of a (*b)   = %u\n", *b);
	printf("value of a *(&a)  = %u\n", *(&a));
	printf("address of a (b)  = %u = value of b\n", b);
	printf("address of b (&b) = %u\n", &b);
	printf("address of b (p)  = %u\n", p);
	printf("value of b (*p)   = %u", *p);
	return 0;
}