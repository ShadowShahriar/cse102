#include <stdio.h>

int main()
{
	int a;
	float b;
	char m;

	printf("Enter an integer, a decimal, and a character: ");
	scanf("%d %f %c", &a, &b, &m);

	printf("Given integer value: %d\n", a);
	printf("Given float value: %f\n", b);
	printf("Given character value: %c", m);

	return 0;
}
