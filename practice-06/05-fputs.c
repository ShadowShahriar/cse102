#include <stdio.h>
#include <stdlib.h>
#define buffer 1000

int main()
{
	char data[buffer];
	FILE *fptr = fopen("secret.txt", "w");

	if (fptr == NULL)
	{
		printf("Unable to create file.");
		exit(1);
	}

	printf("Write your secret message:\n");
	fgets(data, buffer, stdin);
	fputs(data, fptr);
	fclose(fptr);
	printf("Now everyone knows your secret message. ;)");
	return 0;
}