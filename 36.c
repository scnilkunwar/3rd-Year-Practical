/* combination */

#include <stdio.h>

long long factorial(int num)
{
	long long fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact *= i;
	}
	
	return fact;
}

int combination(int n, int r)
{
	return (factorial(n) / (factorial(n-r) * factorial(r)));;
}

int main()
{
	int n, r;
	
	printf("enter value of n: ");
	scanf("%d",&n);
	
	printf("enter value of r: ");
	scanf("%d",&r);
	
	printf("%dc%d is %d", n, r, combination(n, r));
	return 0;
}
