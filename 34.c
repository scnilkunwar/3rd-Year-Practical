/* factorial using recursion */

#include <stdio.h>

long fact(int num)
{
	if(num == 1)
	{
		return 1;
	}
	
	return num*fact(num-1);
}

int main()
{
	int num;
	printf("enter a num: ");
	scanf("%d",&num);
	printf("factorial is %ld",fact(num));
	return 0;
}
