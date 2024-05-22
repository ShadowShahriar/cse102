#include <stdio.h>
#include <math.h>

int isPerfectSquare(int x)
{
	int sqrtx = sqrt(x);
	return sqrtx * sqrtx == x;
}

int main()
{
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int ps = 0;
		int m = 0;
		scanf("%d", &m);
		for (int j = 0; j < m; j++)
		{
			int num = 0;
			scanf("%d", &num);
			if (isPerfectSquare(num) == 0)
				ps++;
		}
		printf("%d\n", ps);
	}
	return 0;
}