#include <stdio.h>
int main()
{
	int demand = 0, bill = 0;
	int charge = 0, serviceCharge = 50;
	scanf("%d", &demand);

	if (demand <= 5)
		charge = 100;
	else if (demand >= 6 && demand <= 10)
		charge = 80;
	else if (demand >= 11 && demand <= 20)
		charge = 60;
	else if (demand > 20)
		charge = 50;

	bill = (demand * charge) + serviceCharge;
	printf("%d", bill);

	return 0;
}