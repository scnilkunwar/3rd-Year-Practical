/*  Find the sum of natural number series (e.g. squares, cubes, etc.). */

#include <stdio.h>

long power(base, power)
{
	long indc = 1;
	for(int i=0;i<power;i++)
	{
		indc = indc * base;
	}
	return indc;
}
int main()
{
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=4;i++)
	{
		long long sum = 0;
		for(int j=1;j<=n;j++)
		{
			sum += power(j, i);
		}
		
		printf("sum of %d natural number of %d power is %lld\n", n, i, sum);
	}
	return 0;
}
