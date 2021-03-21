/*  Use Function call by reference to swap two given numbers. */

#include <stdio.h>

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int x, y;
	
	printf("enter 1st number: ");
	scanf("%d",&x);
	printf("enter 2nd number: ");
	scanf("%d",&y);
	
	printf("\nbefore swaping:\nx = %d, y = %d", x, y);
	
	swap(&x, &y);
	
	printf("\n\nafter swaping:\nx = %d, y = %d", x, y);
	return 0;
}