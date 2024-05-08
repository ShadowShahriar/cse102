#include <stdio.h>

int main()
{
	char str[10];
	char str2[10];
	int length = 0;
	int palindrome = 1;
	printf("Given string: ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++)
		length++;

	printf("Reversed string: ");
	for (int j = 0; j < length; j++)
	{
		str2[j] = str[length - j - 1];
		printf("%c", str2[j]);
	}

	for (int k = 0; k < length; k++)
	{
		if (str[k] != str2[k])
		{
			palindrome = 0;
			break;
		}
	}

	printf("\n");
	if (palindrome)
		printf("The given string is a palindrome.");
	else
		printf("The given string is NOT a palindrome.");

	return 0;
}