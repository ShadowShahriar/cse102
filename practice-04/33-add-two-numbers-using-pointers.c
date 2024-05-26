#include <stdio.h>

int main()
{
	int n1 = 42, n2 = 64, sum = 0;
	int *ptr1 = &n1;
	int *ptr2 = &n2;

	sum = *ptr1 + *ptr2;
	printf("%d + %d = %d", *ptr1, *ptr2, sum);
	return 0;
}