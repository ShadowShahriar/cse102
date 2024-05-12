#include <stdio.h>

int num = 13;
int sqr()
{
	return num * num;
}

int main()
{
	int result = sqr();
	printf("%d × %d is equal to %d", num, num, result);
	return 0;
}