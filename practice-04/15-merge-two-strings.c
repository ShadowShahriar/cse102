#include <stdio.h>
#define SIZE 100

int main()
{
	int i = 0;
	int j = 0;
	char terminator = '\0';
	char str1[SIZE];
	char str2[SIZE];

	printf("Enter first string:  ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);

	while (str1[i] != terminator)
	{
		i++;
	}

	while (str2[j] != terminator)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = terminator;

	printf("Merged string: %s", str1);
	return 0;
}