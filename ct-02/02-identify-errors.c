#include <stdio.h>
int myFunction(int var1, int var2)
{
	if (var1 % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int num = 4;
	int num2 = 7;
	int result = myFunction(num, num2);
	printf("Result is: %d", result);
	return 0;
}