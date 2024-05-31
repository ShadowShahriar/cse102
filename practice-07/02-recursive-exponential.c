#include <stdio.h>
int toPower(int n, int e)
{
	if (e > 1)
		return n * toPower(n, e - 1);
	else
		return n;
}

int main()
{
	printf("%d", toPower(2, 3));
	return 0;
}