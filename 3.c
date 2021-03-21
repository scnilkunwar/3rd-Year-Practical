/* Convert a given temperature in Celsius into Fahrenheit. */

#include <stdio.h>

int main()
{
	float fahrenheit, celsius;
	
	printf("enter temperature in celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit = 1.8*celsius + 32;
	
	printf("tempersture in fahrenheit is: %.3f",fahrenheit);
	return 0;
}
