#include <stdio.h>

int main()
{
	char letter;
	printf("Enter a character: ");
	scanf("%c", &letter);

	if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
	{
		if (letter == 'a' ||
			letter == 'e' ||
			letter == 'i' ||
			letter == 'o' ||
			letter == 'u' ||
			letter == 'A' ||
			letter == 'E' ||
			letter == 'I' ||
			letter == 'O' ||
			letter == 'U')
		{
			printf("It is a vowel");
		}
		else
		{
			printf("It is a consonant");
		}
	}
	else
	{
		printf("It is not an alphabetical character");
	}

	return 0;
}
