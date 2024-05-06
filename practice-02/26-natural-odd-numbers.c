#include <stdio.h>

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	if (n <= 1)
	{
		printf("n must be greater than 1.");
		return 0;
	}

	printf("Odd numbers from 1 to %d: ", n);
	for (int i = 1; i <= n; i++)
		if (i % 2 != 0)
			if (n % 2 != 0 && i == n || (n - 1) % 2 != 0 && i == n - 1)
				printf("%d", i); // remove trailing comma
			else
				printf("%d, ", i);
	return 0;
}