#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Coder";
	char str2[50] = {0};
	strcpy(str2, str1);
	puts(str2);
	return 0;
}