#include <stdio.h>

void main(void)
{
	FILE* fp;
	char buffer[100];

	fp = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fgets(buffer,100,fp);
		puts(buffer);
		fclose(fp);
	}
}