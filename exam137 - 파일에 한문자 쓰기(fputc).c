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
		fputc('A', fp);
		puts("����'A'�� ���Ͽ� �����߽��ϴ�.");
		fclose(fp);

	}
}