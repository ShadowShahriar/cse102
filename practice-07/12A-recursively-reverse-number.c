#include <stdio.h>
#include <math.h>

int reverse(int num)
{
	return ((num <= 9)) ? num : reverse(num / 10) + ((num % 10) * (pow(10, (floor(log10(abs(num)))))));
}

int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	int rev = reverse(num);
	printf("Reverse of %d = %d", num, rev);
	return 0;
}