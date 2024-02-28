#include <stdio.h>

int main()
{
	char value;
	printf("Enter a character: ");
	scanf("%c", &value);

	if (value >= 'A' && value <= 'Z')
		printf("It is an uppercase character");
	else if (value >= 'a' && value <= 'z')
		printf("It is a lowercase character");
	else
		printf("It is not an alphabetical character");

	return 0;
}
