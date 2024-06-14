#include <stdio.h>
int main()
{
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		long long S = 0;
		long long T = 0;
		long long X = 0;
		long long Y = 0;
		scanf("%lld %lld", &X, &Y);
		if (X > Y)
		{
			T = Y;
			Y = X;
			X = T;
		}
		for (long long Z = X + 1; Z < Y; Z++)
			if (Z % 2 != 0)
				S += Z;
		printf("%lld\n", S);
	}
	return 0;
}