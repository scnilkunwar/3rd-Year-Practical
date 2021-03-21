/* sort a given set of numbers */

#include <stdio.h>

int main()
{
	int num, arr[1000];
	
	printf("enter how many elements?\n");
	scanf("%d",&num);
	
	printf("enter %d elements: ", num);
	
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=num-1;i>=0;i--)
	{
		for(int j=1;j<i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
	}
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
