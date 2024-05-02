#include <stdio.h>
#include <stdlib.h>
int randomNum()
{
	return (rand() % 100) + 1;
}

int isPrime(int num)
{
	if (num < 2)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	for (int i = 2; i * i <= num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int allPrime(int array[], int size)
{
	for (int i = 0; i < size; i++)
		if (!isPrime(array[i]))
			return 0;
	return 1;
}

int main()
{
	int size = 10;
	int array[size];
	for (int i = 0; i < size; i++)
		array[i] = randomNum();

	int iteration = 0;
	while (!allPrime(array, size))
	{
		iteration++;
		printf("Iteration %2d: ", iteration);

		for (int j = 0; j < size; j++)
		{
			if (iteration != 0)
				if (!isPrime(array[j]))
					array[j] = randomNum();
			printf("%2d ", array[j]);
		}
		printf("\n");
	}

	printf("\nTotal iteration needed: %d", iteration);
	return 0;
}