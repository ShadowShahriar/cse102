#include <stdio.h>

// The following piece of code is written by Ashikur Rahman
// https://www.facebook.com/profile.php?id=100088822024865
int isPalindrome(char str[])
{
	int i = 0;
	while (str[i])
		i++;

	int n = i;
	for (i = 0; i < n / 2; i++)
		if (str[i] != str[n - i - 1])
			return 1;
	return 0;
}

int main()
{
	char str[100] = {0};
	printf("Enter a string: ");
	scanf("%s", &str);

	if (isPalindrome(str) == 0)
		printf("'%s' is palindrome.", str);
	else
		printf("'%s' is NOT palindrome.", str);
	return 0;
}