#include <stdio.h>

void main(void)
{
	FILE* fp;
	int i;

	fp = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fscanf(fp, "%d", &i);
		printf("i=%d \n", i);
		fclose(fp);
	}
}