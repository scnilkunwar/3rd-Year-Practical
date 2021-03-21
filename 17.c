/* perfect numbers between two numbers */

#include <stdio.h>

int main()
{
	int low_lim, up_lim, count = 0;
	
	printf("enter lower limit: ");
	scanf("%d",&low_lim);
	printf("enter upper limit: ");
	scanf("%d",&up_lim);
	
	for(int i=low_lim;i<=up_lim;i++)
	{
		int sum = 0;
		for(int j=1;j<i;j++)
		{
			if(i % j == 0)
			{
				sum += j;
			}
		}
		
		if(sum == i)
		{
			printf("%d ",i);
			count++;
		}
	}
	
	if(count > 0)
	{
		printf("\nthere are %d perfect numbers",count);
	}
	else
	{
		printf("\nthere are no any perfect numbers");
	}
	return 0;
}
