#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "I am ";
	char str2[20] = "strong!";
	strcat(str1, str2);
	puts(str1);
	return 0;
}