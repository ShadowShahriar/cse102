#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	printf("Given string:    ");
	gets(str1);

	strcpy(str2, str1);
	strrev(str2);
	printf("Reversed string: ");
	puts(str2);
	return 0;
}