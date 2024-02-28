#include <stdio.h>

int main()
{
	int number;
	float converted;
	printf("Enter obtained number of your History exam: ");
	scanf("%d", &number);

	converted = number * 100 / 30; // because Mid-Term was a 30 marks exam

	if (converted >= 80)
		printf("A+");
	else if (converted >= 75)
		printf("A");
	else if (converted >= 70)
		printf("A-");
	else if (converted >= 65)
		printf("B+");
	else if (converted >= 60)
		printf("B");
	else if (converted >= 55)
		printf("B-");
	else if (converted >= 50)
		printf("C+");
	else if (converted >= 45)
		printf("C");
	else if (converted >= 40)
		printf("D");
	else
		printf("F");

	return 0;
}
