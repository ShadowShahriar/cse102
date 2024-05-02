#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			sum += 2;
		}
	}
	printf("%d", sum); // "8"
}