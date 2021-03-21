/* write prime numbers in given range */

#include <stdio.h>

int is_prime(int num)
{
	if(num<2)
	{
		return 0;
	}
	
	else
	{
		int i;
		for(i=2;i<num;i++)
		{
			if(num % i == 0)
			{
				return 0;
			}
		}
		
		if(i == num)
		{
			return 1;
		}
	}
}

int main()
{
    int low_lim, up_lim, count=0;
   
    printf("enter lower limit: ");
    scanf("%lu", &low_lim);
    printf("enter upper limit: ");
    scanf("%lu", &up_lim);
   

    for(int i=low_lim;i<=up_lim;i++)
    {
   		 int check = is_prime(i);
   		 
   		 if(check == 1)
   		 {
   			 printf("%d ",i);
   			 count++;
   		 }
    }

    if(count == 0)
    {
  		 printf("\nthere are no any primes"); 	
    }
    
    else
    {
    	printf("\nthere are %d primes",count);
    }
    return 0;
}
