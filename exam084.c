#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void main(void)
{
	int value;
	char string[100];
	int radix;

	radix = 2; //2진수

	value = 12345;
	itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);

	value = -12345;
	itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다. \n", string);

}