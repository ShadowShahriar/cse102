#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "I am ";
	char str2[20] = "a programmer";
	strcat(str1, str2);
	puts(str1);
	return 0;
}