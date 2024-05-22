#include <stdio.h>

int main()
{
	int number, count = 0, temp, result = 1, remainder;
	scanf("%d", &number);
	temp = number;

	while (temp != 0)
	{
		if (count == 2)
			break;
		remainder = temp % 10;
		result *= remainder;
		temp /= 10;
		count++;
	}

	printf("%d", result);
	return 0;
}