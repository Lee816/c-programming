#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void main(void)
{
	double value;
	char buffer[100];

	value = 3.14e10;
	gcvt(value, 3, buffer);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", buffer);

	value = -3.15e10;
	gcvt(value, 3, buffer);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", buffer);

}