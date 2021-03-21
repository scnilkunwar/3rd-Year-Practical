/*  Calculate SI & CI of a given sum for a given time period at a given rate. */

#include <stdio.h>
#include <math.h>

int main()
{
	float sum, rate, si, ci;
	int year;
	
	printf("enter sum (Rs.): ");
	scanf("%f",&sum);
	printf("enter rate (%%): ");
	scanf("%f",&rate);
	printf("enter time (years): ");
	scanf("%d",&year);
	
	si = (sum*year*rate)/100;
	ci = sum*(powf(1+(rate/100), year)-1);
	
	printf("simple interest (SI) = %.2f",si);
	printf("\ncompound interest (CI) = %.2f",ci);
	
	return 0;
}
