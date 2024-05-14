#include <stdio.h>
#define SIZE 20

int main()
{
	int diff = 'a' - 'A';
	char str[SIZE] = {0};
	scanf("%s", &str);

	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			printf("%c", (int)str[i] - diff);
		else
			printf("%c", str[i]);
	}
	return 0;
}