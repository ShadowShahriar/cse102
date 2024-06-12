#include <stdio.h>
int main()
{
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n = 0;
		long long f = 1;
		scanf("%d", &n);
		for (int i = 2; i <= n; i++)
			f *= i;
		printf("%lld\n", f);
	}
	return 0;
}