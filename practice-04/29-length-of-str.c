#include <stdio.h>
#include <string.h>

int main()
{
	int length = 0;
	char str[100] = {0};

	printf("Enter a string: ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++)
		length++;

	printf("Length (using for-loop):\t %d\n", length);
	printf("Length (using library function): %d\n", strlen(str));
	return 0;
}