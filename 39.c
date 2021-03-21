/* Take input any word. Find storage location of each letter in that word. Find the length of this 
word using pointer but not the strlen() function. */

#include <stdio.h>

int main()
{
	char word[20];
	
	printf("enter a word: ");
	scanf("%s",word);
	
	int i=0;
	while(word[i] != '\0')
	{
		printf("storage location of %c = %x\n",*(word+ i), word+i);
		i++;
	}
	
	int len = ((word + i) - word) / sizeof(char);
	printf("%d",len);
	return 0;
}
