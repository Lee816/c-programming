#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("abcde", fp);
		printf("���� �������� ��ġ : %d \n", ftell(fp));
		fseek(fp, -2L, SEEK_CUR);
		printf("���� �������� ��ġ : %d \n", ftell(fp));
		fclose(fp);
	}
}