#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.14e10;
	pstr = ecvt(value, 3, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);

	value = -3.14e10;
	pstr = ecvt(value, 3, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);

}