#include <stdio.h>
#include <string.h>
#define length 50

int main()
{
	char fullName[length] = {0};
	printf("Enter your full name: ");
	fgets(fullName, length, stdin);

	// remove trailing newline character
	// from https://stackoverflow.com/a/28462221
	fullName[strcspn(fullName, "\r\n")] = 0;

	printf("Welcome, %s!", fullName);
	return 0;
}