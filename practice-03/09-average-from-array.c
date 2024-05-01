#include <stdio.h>
double getAverage(double arr[], int N)
{
	double sum = 0;
	double average = 0;

	for (int i = 0; i < N; i++)
		sum += arr[i];

	average = sum / N;
	return average;
}

int main()
{
	double money[4] = {90.00, 29.26, 17.11, 570.052};
	double average = getAverage(money, 4);

	printf("Average value is: %f", average);
	return 0;
}