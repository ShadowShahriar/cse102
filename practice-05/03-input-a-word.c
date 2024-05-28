#include <stdio.h>

int main()
{
	char nickName[25] = {0};
	printf("Enter your nick name: ");
	scanf("%s", &nickName);
	printf("Cool! Have a nice day, %s!", nickName);
	return 0;
}