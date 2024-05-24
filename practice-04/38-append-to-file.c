#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	FILE *fptr;
	fptr = fopen("D:\\append-example.txt", "a");

	if (fptr == NULL)
	{
		printf("Unable to append to file.");
		return 1;
	}

	printf("Enter an integer: ");
	scanf("%d", &n);

	fprintf(fptr, "%d\n", n);
	fclose(fptr);

	return 0;
}