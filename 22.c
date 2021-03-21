/* Using Switch make a calculator, which can perform basic operations. */

#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("enter 1st number: ");
	scanf("%d",&num1);
	printf("enter 2nd number: ");
	scanf("%d",&num2);
	
	printf("\nchoose operation(enter)\na for addition\nm for multiplication\nd for division\ns for subtraction\n");
	
	char ch;
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("\nadditon is %d",num1 + num2);
		break;
		
		case 'm':
			printf("multiplication is %d",num1 * num2);
		break;
		
		case 'd':
			printf("\ndivision is %.2f", (float) num1 / num2);
		break;
		
		case 's':
			printf("\nsubtraction is %d",num1 - num2);
		break;
		
		default:
			printf("\ninvalid option");
	}
	return 0;
}