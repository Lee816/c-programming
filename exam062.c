#include <stdio.h>
#include <string.h>

void main(void)
{
	char string[100];
	char string2[100];

	printf("ù ��° �ܾ �Է��ϼ���. \n");
	gets(string);

	printf("�� ��° �ܾ �Է��ϼ���. \n");
	gets(string2);

	strcat_s(string,100,string2);

	puts(string);

}