#include <stdio.h>

int main()
{
	char name[50];
	char address[200];
	char email[50];

	printf("Enter your name: ");
	gets(name);

	printf("Enter your address: ");
	gets(address);

	printf("Enter your e-mail: ");
	gets(email);

	printf("\nYour name is ");
	puts(name);

	printf("Your address is ");
	puts(address);

	printf("Your e-mail is ");
	puts(email);
	return 0;
}