#include <stdio.h>

void main(void)
{
	FILE* file;

	file = fopen("C:\\Users\\mycom\\Desktop\\���α׷���\\c\\file.txt", "w+");

	if (file == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		puts("������ ���������� �����Ǿ����ϴ�.");
		fclose(file);
	}
}