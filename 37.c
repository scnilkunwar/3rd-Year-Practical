/* strong number */

#include <stdio.h>

int factorial(int num)
{
	int fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact *= i;
	}
	
	return fact;
}

int main()
{
	int num;
	
	printf("enter a number to check strong or not: ");
	scanf("%d",&num);
	
	int temp = num, rem, sum = 0;
	while(temp > 0)
	{
		rem = temp % 10;
		sum += factorial(rem);
		temp /= 10;
	}
	
	if(num == sum)
	{
		printf("%d is strong number");
	}
	
	else
	{
		printf("%d is not strong number");
	}
	
	return 0;
}
