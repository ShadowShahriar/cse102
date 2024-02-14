/*
 * This C program prints whether
 * a liquid is acidic or basic.
 */

#include <stdio.h>

int main()
{
	float pH;
	printf("Enter a pH value: ");
	scanf("%f", &pH);
	if (pH < 0 || pH > 14)
	{
		printf("Invalid pH range. Please input a pH value within the range [0, 14].");
	}
	else
	{
		if (pH < 7)
		{
			printf("The given pH indicates an acidic liquid.");
		}
		else if (pH == 7)
		{
			printf("The given pH indicates a neutral liquid.");
		}
		else
		{
			printf("The given pH indicates a basic liquid.");
		}
	}
	return 0;
}