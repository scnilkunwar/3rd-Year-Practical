/* Convert a given temperature in Fahrenheit into Celsius. */

#include <stdio.h>

int main()
{
	float fahrenheit, celsius;
	
	printf("enter temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit - 32)/1.8;
	
	printf("tempersture in celsius is: %.3f",celsius);
	return 0;
}