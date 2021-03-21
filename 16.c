/* identify perfect number */

#include <stdio.h>

int main()
{
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);

	int sum = 0;
	for(int i=1;i<num;i++)
	{
		if(num % i == 0)
		{
			sum +=i;
		}
	}
	
	if(sum == num )
	{
		printf("%d is perfect number",num);
	}
	else
	{
		printf("%d is not perfect numbers",num);
	}
	return 0;
}
