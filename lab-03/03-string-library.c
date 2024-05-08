#include <stdio.h>
#include <string.h>

int main()
{
	int str1[100], str2[100];
	printf("Enter a string: ");
	gets(str1);

	strcpy(str2, str1);
	strrev(str2);
	printf("Reversed string: %s", str2);

	printf("\n\n");
	if (strcmp(str1, str2) == 0)
		printf("The given string is a palinedrome.");
	else
		printf("The given string is NOT a palinedrome.");
	printf("\n");

	return 0;
}