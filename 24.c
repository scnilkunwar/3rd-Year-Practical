/* Convert a number in decimal to binary. */

#include <stdio.h>

int main()
{
	int dec_num, rem, bin_num[100];
	
	printf("enter a decimal number: ");
	scanf("%d",&dec_num);
	
	int i = 0;
	
	while(dec_num > 0)
	{
		rem = dec_num % 2;
		bin_num[i] = rem;
		i++;
		dec_num /= 2;
	}
	
	//reversing
	printf("binary num: ");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",bin_num[j]);
	}
	
	return 0;
}
