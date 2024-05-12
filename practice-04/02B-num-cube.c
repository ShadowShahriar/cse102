#include <stdio.h>
#include <math.h>

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int cube = pow(num, 3);
	printf("%d³ is equal to %d", num, cube);
	return 0;
}