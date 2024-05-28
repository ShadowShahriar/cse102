#include <stdio.h>

int main()
{
	// assigning a string literal without size
	char str1[] = "shahriar";
	printf("String 1: %s\n", str1);

	// assigning a string literal with a predefined size
	char str2[25] = "nasrin";
	printf("String 2: %s\n", str2);

	// assigning character by character without size
	char str3[] = {'a', 'r', 'o', 'n', 'n', 'o', '\0'};
	printf("String 3: %s\n", str3);

	// assigning character by character with size
	char str4[25] = {'s', 'u', 'p', 't', 'y', '\0'};
	printf("String 4: %s\n", str4);

	return 0;
}