#include <stdio.h>
#define length 100

int main()
{
	int i = 0;
	int str1[length] = {0};
	int str2[length] = {0};

	printf("Enter first string : ");
	gets(str1);

	int length1 = 0;
	for (i = 0; str1[i] != '\0'; i++)
		length1++;

	printf("Enter second string: ");
	gets(str2);

	int length2 = 0;
	for (i = 0; str2[i] != '\0'; i++)
		length2++;

	int flag = 0;
	int max = length1 > length2 ? length1 : length2;
	for (i = 0; i < max; i++)
	{
		if (str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
	}

	printf("\n");
	if (flag == 0)
		printf("Both strings are equal.");
	else
		printf("These strings are different.");
	return 0;
}