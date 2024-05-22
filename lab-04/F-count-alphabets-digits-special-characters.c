#include <stdio.h>

int main()
{
	char str[100];
	int alpha, digit, spl, i;
	alpha = digit = spl = i = 0;
	gets(str);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			alpha++;
		else if (str[i] >= '0' && str[i] <= '9')
			digit++;
		else
			spl++;
		i++;
	}
	printf("Alphabets = %d\n", alpha);
	printf("Digits = %d\n", digit);
	printf("Special characters = %d", spl);
	return 0;
}