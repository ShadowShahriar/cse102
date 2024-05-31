#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 13;
	int b = 42;
	int *ptr_a = &a;
	int *ptr_b = &b;

	printf("Before swapping:\na = %d\nb = %d\n\n", a, b);
	swap(ptr_a, ptr_b);
	printf("After swapping:\na = %d\nb = %d", a, b);
	return 0;
}