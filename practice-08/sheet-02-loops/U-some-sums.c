#include <stdio.h>
long long numSum(long long N)
{
	long long S = 0;
	long long R = 0;
	long long M = 0;
	M = N;

	while (M != 0)
	{
		R = M % 10;
		M /= 10;
		S += R;
	}
	return S;
}

int main()
{
	long long N = 0;
	long long A = 0;
	long long B = 0;
	long long S = 0;
	long long T = 0;
	scanf("%lld %lld %lld", &N, &A, &B);
	for (int R = 1; R <= N; R++)
	{
		T = numSum(R);
		if (T >= A && T <= B)
			S += R;
	}
	printf("%lld", S);
	return 0;
}