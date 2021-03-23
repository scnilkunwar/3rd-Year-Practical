/* hcf of two numbers */

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("enter two numbers (with space): ");
	scanf("%d %d",&num1, &num2);
	
	for(int i=num1;i>=1;i--)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			printf("hcf is %d", i);
			break;
		}
	}
	return 0;
}
