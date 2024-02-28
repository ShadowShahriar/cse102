/*
 * This C program check whether a
 * given year is leap year or not.
 */

#include <stdio.h>

int main()
{
	int year;
	printf("Please enter a valid year: ");
	scanf("%d", &year);

	if (year < 1000 || year > 2999)
	{
		printf("Invalid year");
	}
	else
	{
		if ((year % 400 == 0 || year % 4 == 0) && year % 100 != 0)
		{
			printf("%d is a leap year.", year);
		}
		else
		{
			printf("%d is NOT a leap year.", year);
		}
	}

	return 0;
}