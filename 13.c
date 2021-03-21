/*  Identify palindrome number. */

#include <stdio.h>

int main()
{
	int num, rev = 0, rem;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	int temp = num;
	while(temp > 0)
	{
		rem = temp % 10;
		rev = rev*10 + rem;
		temp /= 10;
	}
	if(rev == num)
	{
		printf("%d is palindrome",num);
	}
	
	else
	{
		printf("%d is not palindrome",num);
	}
	
	return 0;
}
