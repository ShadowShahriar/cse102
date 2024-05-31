#include <stdio.h>
#include <string.h>

struct Student
{
	char name[50];
	int intake;
	int section;
};

int main()
{
	struct Student student1;
	strcpy(student1.name, "Shadman Shahriar");
	student1.intake = 53;
	student1.section = 11;

	printf("Student Information:\n");
	printf("Name   : %s\n", student1.name);
	printf("Intake : %d\n", student1.intake);
	printf("Section: %d\n", student1.section);

	return 0;
}