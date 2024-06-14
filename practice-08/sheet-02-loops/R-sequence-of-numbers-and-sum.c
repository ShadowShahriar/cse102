#include <stdio.h>
int main()
{
	while (1)
	{
		long long A = 0;
		long long B = 0;
		long long S = 0;
		long long T = 0;
		scanf("%lld %lld", &A, &B);
		if (A <= 0 || B <= 0)
			break;

		if (A > B)
		{
			T = B;
			B = A;
			A = T;
		}
		for (long long C = A; C <= B; C++)
		{
			printf("%lld ", C);
			S += C;
		}
		printf("sum =%lld\n", S);
	}
	return 0;
}