/* Multiplication Table of numbers in given range. */

#include <stdio.h>

int main()
{
	int num, low_lim, up_lim, count=0;
	
	printf("enter a number to find its multiplication table: ");
	scanf("%d",&num);
	printf("enter lower limit: ");
    scanf("%lu", &low_lim);
    printf("enter upper limit: ");
    scanf("%lu", &up_lim);
   
	for(int i=low_lim;i<=up_lim;i++)
	{
		printf("%d x %d = %d\n", num, i, num*i);
	}
	return 0;
}
