#include <stdio.h>

int main()
{
	int n = 0;
	printf("Input value of n: ");
	scanf("%d", &n);

	int rollNum = 0;
	printf("Input Bruce Wayne's roll number: ");
	scanf("%d", &rollNum);

	int studentArray[n];
	printf("Input rolls of students on the list: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &studentArray[i]);

	for (int j = 0; j < n; j++)
	{
		if (studentArray[j] == rollNum)
		{
			printf("Bruce Wayne is on the list!");
			return 0;
		}
	}

	printf("Bruce Wayne is not on the list!");
	return 0;
}
