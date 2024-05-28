#include <stdio.h>

int main()
{
	char fullName[50] = {0};
	printf("Enter your full name: ");
	gets(fullName);
	printf("Welcome, %s!", fullName);
	return 0;
}