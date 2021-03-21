/* Identify Alphabet or Digit. */

#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	
	printf("enter a character: ");
	scanf("%c",&ch);
	
	if(isalpha(ch))
	{
		printf("%c is alphabet",ch);
	}
	
	else if(isdigit(ch))
	{
		printf("%c is digit",ch);
	}
	
	else
	{
		printf("%c is neither alphabet nor digit",ch);
	}
	return 0;
}