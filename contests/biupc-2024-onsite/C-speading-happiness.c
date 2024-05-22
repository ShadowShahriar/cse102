#include <stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		int eidi = 0;
		int cousins = 0;
		scanf("%d %d", &eidi, &cousins);

		if (eidi % cousins == 0)
			printf("0\n");
		else
		{
			int temp = eidi;
			while (eidi % cousins != 0)
			{
				eidi++;
			}
			int val = eidi - temp;
			printf("%d\n", val);
		}
	}
	return 0;
}