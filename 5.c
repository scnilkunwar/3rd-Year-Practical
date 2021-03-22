/* Prepare a Result Sheet of a student taking input of four subjects and output result with pass 
division and failed subjects for unsuccessful candidates. */

#include <stdio.h>

int main()
{
	int marks[4];
	char subjects[4][20] = {"physics", "real analysis", "c programming", "discrete math"};
	
	for(int i=0;i<4;i++)
	{
		printf("enter mark in %s: ",subjects[i]);
		scanf("%d",&marks[i]);
		
		if(marks[i] > 100)
		{
			printf("mark can't be more than 100");
			exit(0);
		}
	}
	
	int sum = 0, flag = 0;
	
	for(int i=0;i<4;i++)
	{
		sum += marks[i];
		
		if(marks[i] < 35)
		{
			printf("you failed in %s\n",subjects[i]);
			flag++;
		}
	}
	
	if(flag == 0)
	{
		float percent = (float)sum / 4;
		if(percent >= 75)
		{
			printf("\ncongratulation you got distinction with %.2f percent", percent);
		}
		
		else if(percent >= 60)
		{
			printf("\ncongratulation you got 1st division with %.2f percent", percent);
		}
		
		else if(percent >= 50)
		{
			printf("\ncongratulation you got 2nd division with %.2f percent", percent);
		}
		
		else if(percent >= 35)
		{
			printf("\ncongratulation you got 3rd division with %.2f percent", percent);
		}
	}
	
	return 0;
}
