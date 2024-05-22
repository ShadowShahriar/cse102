#include <stdio.h>

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int pc = 0;
		scanf("%d", &pc);
		sum += pc;
	}

	float percent = (float)sum / 5;
	printf("Percentage = %.2f", percent);

	char grade = 'F';
	if (percent >= 90)
		grade = 'A';
	else if (percent >= 80)
		grade = 'B';
	else if (percent >= 70)
		grade = 'C';
	else if (percent >= 60)
		grade = 'D';
	else if (percent >= 40)
		grade = 'E';
	else
		grade = 'F';
	printf("\nGrade %c", grade);
	return 0;
}