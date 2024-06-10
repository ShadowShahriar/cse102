#include <stdio.h>
int main()
{
	int flag = 0;
	while (flag == 0)
	{
		int password = 0;
		scanf("%d", &password);
		if (password == 1999)
			flag = 1;
		else
			printf("Wrong\n");
	}
	printf("Correct\n");
	return 0;
}