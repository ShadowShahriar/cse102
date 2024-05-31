#include <stdio.h>
#include <string.h>
#define length 50

int main()
{
	char str[length] = {0};
	printf("Enter a string: ");
	fgets(str, length, stdin);

	// remove trailing newline character
	// from https://stackoverflow.com/a/28462221
	str[strcspn(str, "\r\n")] = 0;

	printf("Given string: ");
	puts(str);

	strupr(str);
	printf("Uppercase string: ");
	puts(str);
	return 0;
}