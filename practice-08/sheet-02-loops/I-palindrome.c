#include <stdio.h>
int main()
{
	long long n;
	long long temp;
	long long m = 0;
	long long remainder = 0;
	scanf("%lld", &n);
	temp = n;

	while (temp != 0)
	{
		remainder = temp % 10;
		m = m * 10 + remainder;
		temp /= 10;
	}

	printf("%lld\n", m);
	(m == n) ? printf("YES") : printf("NO");
	return 0;
}