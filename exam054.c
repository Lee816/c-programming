#include <stdio.h>

void main(void)
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	//정렬을 사용하지 않는 경우
	printf("[%d] \n", i);
	printf("[%d] \n", j);
	printf("[%d] \n", k);

	//출력을 5자리 설정
	printf("[%5d] \n", i);
	printf("[%5d] \n", j);
	printf("[%5d] \n", k);

	//출력을 10자리로 설정하고 왼쪽 정렬
	printf("[%-10d] \n", i);
	printf("[%-10d] \n", j);
	printf("[%-10d] \n", k);

}
