#include <stdio.h>

int main()
{
	int length = 0;
	int i = 0;
	char str[100] = {0};
	gets(str);
	char target = 'a';
	scanf("%c", &target);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
		if (str[i] == target)
			printf("'%c' is found at index - %d\n", target, i);
	return 0;
}