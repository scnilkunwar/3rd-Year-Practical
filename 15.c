/* FIdentify Armstrong Number */

#include <stdio.h>
#include <math.h>

int intlen(int num)
{
	int count = 0;
	
	while(num>0)
	{
		num /= 10;
		count++;
	}
	
	return count;
}

int main()
{
	int num, sum = 0, rem;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	int temp = num;
	int len = intlen(num);
	
	while(temp > 0)
	{
		rem = temp % 10;
		sum += pow(rem, len);;
		temp /= 10;
	}
	
	if(sum == num)
	{
		printf("%d is armstrong number",num);
	}
	
	else
	{
		printf("%d is armstrong number",num);
	}
	
	return 0;
}
