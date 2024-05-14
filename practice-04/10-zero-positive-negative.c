#include <stdio.h>

void zeroPosNeg(int num)
{
	if (num < 0)
		printf("This number is negative.");
	else if (num > 0)
		printf("This number is positive.");
	else
		printf("You just entered zero.");
	printf("\n\n");
}

int main()
{
	while (1)
	{
		int num = 0;
		printf("Enter a digit: ");
		scanf("%d", &num);
		zeroPosNeg(num);
	}
	return 0;
}