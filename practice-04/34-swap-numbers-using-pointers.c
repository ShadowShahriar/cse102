#include <stdio.h>

int x = 42, y = 64;
void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

void display()
{
	printf("x = %d, y = %d", x, y);
}

int main()
{
	printf("Before Swapping: ");
	display();

	swap(&x, &y);
	printf("\nAfter Swapping:  ");
	display();

	return 0;
}