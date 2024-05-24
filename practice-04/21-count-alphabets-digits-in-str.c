#include <stdio.h>

int main()
{
	char str[100];
	int alpha, digit, i;
	alpha = digit = i = 0;
	gets(str);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			alpha++;
		else if (str[i] >= '0' && str[i] <= '9')
			digit++;
		i++;
	}

	printf("Alphabets = %d\n", alpha);
	printf("Digits = %d\n", digit);
	return 0;
}