#include <stdio.h>

int main()
{
	int n = 10;
	int *p;
	p = &n;

	printf("Address of n (&n) = %p\n", &n);
	printf("Address of n (p)  = %p", p);
	return 0;
}