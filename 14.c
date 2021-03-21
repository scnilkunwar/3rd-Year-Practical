/* Find sum of digits in a given number. */

#include <stdio.h>

int main()
{
	int num, sum = 0, rem;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem = num % 10;
		sum += rem;
		num /= 10;
	}
	
	printf("sum of digits is: %d",sum);
	
	return 0;
}
