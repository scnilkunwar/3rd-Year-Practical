/* Using Switch illustrate meaning of traffic light. */

#include <stdio.h>

int main()
{
	char color;
	
	printf("enter color of light\nr for red\ng for green\ny for yellow\n");
	scanf("%c",&color);
	
	switch(color)
	{
		case 'r':
			printf("stop the vehicle!!");
		break;
		
		case 'g':
			printf("safe to go!!");
		break;
		
		case 'y':
			printf("look around and go if it's safe to go otherwise stop!!");
		break;
		
		default:
			printf("invalid option!!");
	}
	
	return 0;
}
