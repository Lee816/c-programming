#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void main(void)
{
	int value;
	char string[100];
	int radix;

	radix = 16;  //16����

	value = 34567;
	itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);

	value = 1234567890;
	itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);

}