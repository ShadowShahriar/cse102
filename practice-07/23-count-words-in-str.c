#include <stdio.h>

void main()
{
	char str[200] = {0};
	printf("Enter a string: ");
	gets(str);

	int count = 1;
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' && str[i + 1] != ' ')
			count++;

	printf("The given string has %d words.", count);
	return 0;
}