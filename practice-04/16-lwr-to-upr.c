#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = {0};
	printf(" Given: ");
	gets(str);

	strupr(str);
	printf("Result: ");
	puts(str);
	return 0;
}