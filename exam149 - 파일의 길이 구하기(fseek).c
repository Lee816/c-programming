#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fseek(fp, 0L, SEEK_END);
		printf("������ ���� : %d \n", ftell(fp));
		fclose(fp);
	}
}