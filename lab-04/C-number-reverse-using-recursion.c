#include <stdio.h>
int sum = 0;
int rem = 0;

int reverse(int num)
{
	if (num)
	{
		rem = num % 10;
		sum = sum * 10 + rem;
		reverse(num / 10);
	}
	else
		return sum;
}

int main()
{
	sum = 0;
	rem = 0;
	int num = 0;
	scanf("%d", &num);

	int rev = reverse(num);
	printf("Reverse of %d = %d", num, rev);
	return 0;
}