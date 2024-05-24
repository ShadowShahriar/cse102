#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	FILE *fptr;
	fptr = fopen("D:\\write-example.txt", "w");

	if (fptr == NULL)
	{
		printf("Unable to write to file.");
		return 1;
	}

	printf("Enter an integer: ");
	scanf("%d", &n);

	fprintf(fptr, "%d", n);
	fclose(fptr);

	return 0;
}