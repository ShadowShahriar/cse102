#include <stdio.h>

int search(int target, int first, int last)
{
	int location = -1;
	if (first <= last)
	{
		int mid = (first + last) * .5;
		if (target == mid)
			location = mid;
		else if (target < mid)
			location = search(target, first, mid - 1);
		else
			location = search(target, mid + 1, last);
	}

	return location;
}

int main()
{
	printf("%d", search(20, 0, 256));
	return 0;
}