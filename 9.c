/*  Storage size and range of data types float. */

#include <stdio.h>
#include <float.h>

int main()
{
	printf("size of float: %d\n", sizeof(float));
	printf("float max    : %g\n", FLT_MAX);
	printf("float max    : %g\n", FLT_MIN);
	printf("precision    : %d\n", LDBL_DIG);

	return 0;
}
