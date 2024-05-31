#include <stdio.h>
#include <limits.h>
int main()
{
	int i;
	int count = 0;
	printf("How many numbers you'd like to input? ");
	scanf("%d", &count);
	int numbers[count];

	printf("Enter the numbers: ");
	for (i = 0; i < count; i++)
		scanf("%d", &numbers[i]);

	int firstLargest = INT_MIN;
	int secondLargest = INT_MIN;

	for (i = 0; i < count; i++)
	{
		if (numbers[i] > firstLargest)
		{
			secondLargest = firstLargest;
			firstLargest = numbers[i];
		}
		else if (numbers[i] > secondLargest && numbers[i] < firstLargest)
		{
			secondLargest = numbers[i];
		}
	}

	printf("\n");
	printf("\nFirst largest number: %d", firstLargest);
	printf("\nSecond largest number: %d", secondLargest);
	return 0;
}