/*
 * This C program prints the Fahrenheit value
 * of a given Celcius temperature value.
 */

#include <stdio.h>

int main()
{
	float celcius, fahrenheit;
	printf("Enter the Celcius value: ");
	scanf("%f", &celcius);

	fahrenheit = (celcius * 1.8) + 32;
	printf("The temperature is %.2f°F", fahrenheit);
	return 0;
}