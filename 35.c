/* permutation */

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

int permutation(int n, int r)
{
	return (factorial(n) / factorial(n-r));;
}

int main()
{
	int n, r;
	
	printf("enter value of n: ");
	scanf("%d",&n);
	
	printf("enter value of r: ");
	scanf("%d",&r);
	
	printf("%dp%d is %d", n, r, permutation(n, r));
	return 0;
}
