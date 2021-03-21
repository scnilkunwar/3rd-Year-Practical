/* Find storage size and range of data types integer. */

#include <stdio.h>
#include <limits.h>

int main()
{
	printf("size of integer: %d\n", sizeof(int));
	printf("integer max   : %ld\n", INT_MAX);
	printf("float max    : %ld\n", INT_MIN);

	return 0;
}
