#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
	if (num == 0 || num == 1)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	for (int i = 2, m = num / 2; i <= m; i++)
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
	int array[10];
	int size = 10;
	for (int i = 0; i < size; i++)
	{
		int randNum = (rand() % 100) + 1;
		array[i] = randNum;
	}

	int j = 0, y = 0;
	int prime_numbers[100];
	for (int x = 0; x < 100; x++)
	{
		if (isPrime(x))
		{
			prime_numbers[y] = x;
			y++;
		}
	}

	while (!allPrime(array, size))
	{
		j++;
		printf("Iteration %d: ", j);

		for (int k = 0; k < size; k++)
		{
			int randomPrime = rand() % 20; // consider only the first 20 prime numbers from the array
			array[j - 2] = prime_numbers[randomPrime];
			printf("%d ", array[k]);
		}
		printf("\n");
	}

	printf("\nTotal iteration needed: %d", j);
	return 0;
}
