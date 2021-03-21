/*  Find Maximum of numbers in a given set of numbers. */

#include <stdio.h>

int main()
{
	int n, arr[100];
	printf("how many numbers?\n");
	scanf("%d",&n);
	
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	
	int max = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	printf("maximum is: %d",max);
	return 0;
}
