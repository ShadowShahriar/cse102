#include <stdio.h>

int main()
{
	char value;
	printf("Enter a character: ");
	scanf("%c", &value);

	if (value >= 'A' && value <= 'Z' || value >= 'a' && value <= 'z')
		printf("It is an alphabet");
	else if (value >= '0' && value <= '9')
		printf("It is a digit");
	else
		printf("It is a special character");

	return 0;
}