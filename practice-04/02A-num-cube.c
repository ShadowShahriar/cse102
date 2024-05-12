#include <stdio.h>

int cube(int num)
{
	return num * num * num;
}

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int result = cube(num);
	printf("%d³ is equal to %d", num, result);
	return 0;
}