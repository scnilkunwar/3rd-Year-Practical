/* Change case of a given sentence. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char sentence[1000];
	
	printf("enter a sentence: ");
	gets(sentence);
	
	
	for(int i=0;i<strlen(sentence);i++)
	{
		if(islower(sentence[i]))
		{
			sentence[i] = toupper(sentence[i]);
		}
		
		else if(isupper(sentence[i]))
		{
			sentence[i] = tolower(sentence[i]);
		}
		
	}
	
	printf("%s",sentence);
	return 0;
}
