#include <stdio.h>

int main()
{
	int m, n;
	printf("Enter m, n: ");
	scanf("%d %d", &m, &n);

	if (m <= 1 || n <= 1)
	{
		printf("m and n must be greater than or equal to 1.");
		return 0;
	}

	printf("Odd numbers from %d to %d: ", m, n);
	for (int i = m; i <= n; i++)
		if (i % 2 != 0)
			if (n % 2 != 0 && i == n || (n - 1) % 2 != 0 && i == n - 1)
				printf("%d", i); // remove trailing comma
			else
				printf("%d, ", i);
	return 0;
}
