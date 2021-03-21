/* lcm of two numbers */

#include <stdio.h>

int main()
{
	int num1, num2, i;
	printf("enter two numbers (with space): ");
	scanf("%d %d",&num1, &num2);
	
	for(i=num1;i>1;i--)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			break;
		}
	}
	
	int lcm = (num1*num2)/i;
	printf("lcm is %d", lcm);
	return 0;
}
