#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Adam and Eve.";
	char str2[] = "Eve";
	char *ptr = strstr(str1, str2);

	if (ptr)
		printf("The first occurrence of '%s' in '%s' is '%s'", str2, str1, ptr);
	else
		printf("String not found");

	return 0;
}