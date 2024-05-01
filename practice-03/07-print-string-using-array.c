#include <stdio.h>
int main()
{
	char arr[] = {'S', 'h', 'a', 'h', 'r', 'i', 'a', 'r', '\0'};
	int i = 0;

	while (arr[i])
		printf("%c", arr[i++]);
	return 0;
}