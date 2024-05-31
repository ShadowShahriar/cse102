#include <stdio.h>

int main()
{
	FILE *fptr = fopen("data.txt", "w");
	fclose(fptr);
	return 0;
}