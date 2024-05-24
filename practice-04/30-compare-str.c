#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100] = {0};
	char str2[100] = {0};

	printf("Enter string 1: ");
	gets(str1);

	printf("Enter string 2: ");
	gets(str2);

	if (strcmp(str1, str2) == 0)
		printf("Two strings are identical.");
	else
		printf("Two strings are different.");
	return 0;
}