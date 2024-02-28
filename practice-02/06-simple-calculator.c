#include <stdio.h>

int main()
{
	float a, b, result;
	char operation;

	printf("Enter an expression: ");
	scanf("%f %c %f", &a, &operation, &b);

	if (operation == '+')
		printf("a + b = %.2f", a + b);
	else if (operation == '-')
		printf("a - b = %.2f", a - b);
	else if (operation == '*')
		printf("a * b = %.2f", a * b);
	else if (operation == '/')
		printf("a / b = %.2f", a / b);
	else
		printf("No arithmetic operation specified.");

	return 0;
}
