#include <stdio.h>

int main()
{
	int intake = 0;
	scanf("%d", &intake);

	switch (intake)
	{
	case 48:
	case 49:
	case 50:
		printf("Probin");
		break;
	case 51:
	case 52:
	case 53:
		printf("Nobin");
		break;
	default:
		printf("Bohiragoto");
	}

	return 0;
}