#include <stdio.h>
#define STR_MAX 100

char *remspace(char *str)
{
	char *temp = (char *)malloc(STR_MAX);
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
			temp[length++] = str[i];
	temp[length] = '\0';
	return temp;
}

int main()
{
	char str[STR_MAX] = {0};
	gets(str);
	puts(remspace(str));
	return 0;
}