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

	printf("Natural numbers from 1 to %d: ", n);
	for (int i = 1; i <= n; i++)
		if (i == n)
			printf("%d", i); // remove trailing comma
		else
			printf("%d, ", i);
	return 0;
}
