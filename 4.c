/* leap year */

#include <stdio.h>

int main()
{
	int year;
	
	printf("enter year: ");
	scanf("%d",&year);
	
	if(year % 400 == 0)
	{
		printf("%d is leap year",year);
	}
	
	else if(year % 100 == 0)
	{
		printf("%d is not leap year");
	}
	
	else if(year % 4 == 0)
	{
		printf("%d is leap year",year);
	}
	
	else
	{
		printf("%d is not leap year",year);
	}
	return 0;
}
