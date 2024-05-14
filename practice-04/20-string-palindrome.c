#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("Given string: ");
	gets(str1);

	strcpy(str2, str1);
	strrev(str2);

	int result = strcmp(str2, str1);
	if (result == 0)
		printf("'%s' is palindrome!", str1);
	else
		printf("'%s' is not palindrome!", str1);
	return 0;
}