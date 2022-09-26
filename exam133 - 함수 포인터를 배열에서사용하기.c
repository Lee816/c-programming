#include <stdio.h>
#include <string.h>

void main(void)
{
	int (*myfunc[3])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;
	myfunc[2] = myfunc[1];

	puts("hello");
	myfunc[0]("bye");

	printf(" strlen : %d \n", strlen("aa"));
	printf(" strlen : %d \n", myfunc[1]("aa"));
	printf(" strlen : %d \n", myfunc[2]("aa"));

}