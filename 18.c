/* identify prime number */

#include <stdio.h>

int main()
{
	int num;
	
    printf("enter a number: ");
    scanf("%lu", &num);
    
    if(num < 2)
    {
    	printf("%d is not prime",num);
    }
    
    else
    {
    	int i;
    	for(i=2;i<num;i++)
    	{
    		if(num % i == 0)
    		{
    			printf("%d is not prime",num);
    			break;
    		}
    	}
    	
    	if(i == num)
    	{
    		printf("%d is prime",num);
    	}
    }
    
    return 0;
}
