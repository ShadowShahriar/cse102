#include <stdio.h>

int main()
{
	int t1 = 0, t2 = 1;
	int tMax, tNext = t1 + t2;
	scanf("%d", &tMax);

	printf("%d %d", t1, t2);
	for (int i = 3; i <= tMax; i++)
	{
		printf(" %d", tNext);
		t1 = t2;
		t2 = tNext;
		tNext = t1 + t2;
	}

	return 0;
}