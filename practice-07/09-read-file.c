#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	FILE *fptr;

	fptr = fopen("D:\\read-example.txt", "r");
	if (fptr == NULL)
	{
		printf("Error opening the file");
		return 1;
	}

	fscanf(fptr, "%d", &n);
	printf("Stored value in the file: %d", n);
	fclose(fptr);
	return 0;
}