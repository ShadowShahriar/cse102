#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);

	int even = 0;
	int odd = 0;
	int positive = 0;
	int negative = 0;
	for (int i = 0; i < n; i++)
	{
		int m = 0;
		scanf("%d", &m);

		if (m % 2 == 0)
			even++;
		else
			odd++;

		if (m > 0)
			positive++;
		else if (m < 0)
			negative++;
	}

	printf("Even: %d\n", even);
	printf("Odd: %d\n", odd);
	printf("Positive: %d\n", positive);
	printf("Negative: %d", negative);
	return 0;
}