/* fibonacci sequence using recursion */

#include <stdio.h>

void fibo(int a, int b, int terms)
{
	if(terms == 0)
	{
		return;
	}
	
	printf("%d ",a);
	fibo(b, a+b, terms-1);
}

int main()
{
	int n;
	printf("enter no of terms: ");
	scanf("%d",&n);
	
	printf("fibonacci sequence: ");
	fibo(0, 1, n);
	return 0;
}
