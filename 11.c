/* Roots of a given quadratic equation. */

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c;
	
	printf("enter coefficient of x sq. (a): ");
	scanf("%f",&a);
	printf("enter coefficient of x (b): ");
	scanf("%f",&b);
	printf("enter constant (c): ");
	scanf("%f",&c);
	
	float dcrmnt = b*b - 4*a*c;
	
	if(dcrmnt >= 0)
	{
		dcrmnt = sqrtf(dcrmnt);
		
		float root1 = (- b - dcrmnt) / (2*a);
		float root2 = (-b + dcrmnt) / (2*a);
		
		printf("root1 =  %.3f\nroot2 = %.3f",root1, root2);
	}
	
	else
	{
		dcrmnt = sqrtf(-dcrmnt);
		
		float root_real = -b / (2*a);
		float root_img = dcrmnt / (2*a);
		
		printf("root1 =  %.3f + %fi\nroot2 = %.3f - %fi",root_real, root_img, root_real, root_img);
	}
	
	return 0;
}
