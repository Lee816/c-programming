#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		ch = fgetc(fp);
		printf("���� ���� : %c \n", ch);
		fclose(fp);
	}
}