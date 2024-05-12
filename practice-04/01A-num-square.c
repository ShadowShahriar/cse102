#include <stdio.h>

int sqr(int num)
{
	return num * num;
}

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int result = sqr(num);
	printf("%d × %d is equal to %d", num, num, result);
	return 0;
}