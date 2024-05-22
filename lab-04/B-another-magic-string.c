#include <stdio.h>
#include <string.h>
int main()
{
	int length = 0;
	int i = 0;
	char str[100] = {0};
	char target = 'a';
	char dest = 'z';
	gets(str);
	scanf("%c %c", &target, &dest);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
		if (str[i] == target)
			str[i] = dest;

	strrev(str);
	printf("The magic string: ");
	puts(str);
	return 0;
}