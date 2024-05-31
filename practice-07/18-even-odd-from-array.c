#include <stdio.h>

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

	int odd = 0;
	int even = 0;
	for (i = 0; i < count; i++)
	{
		int num = numbers[i];
		if (num % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("\nNumber of even elements: %d", even);
	printf("\nNumber of odd elements : %d", odd);

	return 0;
}