#include <stdio.h>

main028()
{
	int x = 1, y = 2, max;

	max = x > y ? x : y;

	printf("max=%d,x=%d,y=%d", max, x, y);
}