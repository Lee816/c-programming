#include <stdio.h>

void main(void)
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	//������ ������� �ʴ� ���
	printf("[%d] \n", i);
	printf("[%d] \n", j);
	printf("[%d] \n", k);

	//����� 5�ڸ� ����
	printf("[%5d] \n", i);
	printf("[%5d] \n", j);
	printf("[%5d] \n", k);

	//����� 10�ڸ��� �����ϰ� ���� ����
	printf("[%-10d] \n", i);
	printf("[%-10d] \n", j);
	printf("[%-10d] \n", k);

}
