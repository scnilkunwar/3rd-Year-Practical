/* Take input any word. Find storage location of each letter in that word. Find the length of this 
word using pointer but not the strlen() function. */

#include <stdio.h>

int main()
{
	char word[20];
	
	printf("enter a word: ");
	gets(word);
	
	
	char *ptr = word;
	int len = 0;
	
	while(*ptr != '\0')
	{
		printf("storage location of %c = %lu\n",*ptr, ptr);
		len++;
		ptr++;
	}
	
	printf("lenght of word = %d",len);
	return 0;
}
