#include <stdio.h>
#include <limits.h>

int main()
{
	int smallest = INT_MAX;
	int largest = INT_MIN;
	for (int i = 0; i < 20; i++)
	{
		int value = 0;
		scanf("%d", &value);
		if (value < smallest)
			smallest = value;
		if (value > largest)
			largest = value;
	}

	printf("Smallest: %d, Largest: %d", smallest, largest);
	return 0;
}