#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I am an Coder.";
	char str2[] = "I'm an Coder.";
	int result = strcmp(str1, str2);

	if (result == 0)
		printf("Both strings are equal.");
	else
		printf("The strings are different.");

	printf("\nValue in the strcmp result: %d", result);
	return 0;
}