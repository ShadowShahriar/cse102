#include <stdio.h>

int main()
{
	printf("Small letters: \t\t");
	for (int i = 'a'; i <= 'z'; i++)
		printf("%c ", i);

	printf("\nCapital letters: \t");
	for (int i = 'A'; i <= 'Z'; i++)
		printf("%c ", i);
	return 0;
}