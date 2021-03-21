/* Convert a number in binary to decimal. */

#include <stdio.h>

int pow_2(int power)
{
	int ans = 1;
	
	for(int i=0;i<power;i++)
	{
		ans *= 2;
	}
	
	return ans;
}

int main()
{
	long long bin_num, rem;
	int dec_num = 0;
	
	printf("enter binary nukber: ");
	scanf("%lld",&bin_num);
	
	int i = 0;
	while(bin_num > 0)
	{
		rem = bin_num % 10;
		dec_num += (rem * pow_2(i));
		i++;
		bin_num /= 10;
	}
	
	printf("%d",dec_num);
	
	return 0;
}
