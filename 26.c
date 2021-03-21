/* Find Minumum of numbers in a given set of numbers . */

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
	
	int min = arr[0];
	
	for(int i=0;i<n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	printf("minimum is: %d",min);
	return 0;
}
