#include <stdio.h>
#include <string.h>

void print1(int(*X)(const char*));
void print2(int(*X[2])(const char*));

void main(void)
{
	int(*myfunc[2])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;

	print1(myfunc[0]);
	print2(myfunc);

}

void print1(int(*X)(const char*))
{
	X("hello");
}

void print2(int(*X[2])(const char*))
{
	X[0]("bye");
	printf(" strlen : %d \n", X[1]("aa"));
}