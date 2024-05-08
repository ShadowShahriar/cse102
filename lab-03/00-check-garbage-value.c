#include <stdio.h>

int main()
{
	int n = 2000;
	char str[n];
	printf("Enter a string: ");
	gets(str);

	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%4d: ", i);
		printf("%c\n", str[i]);
	}

	return 0;
}