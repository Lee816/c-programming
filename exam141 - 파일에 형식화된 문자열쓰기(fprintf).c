#include <stdio.h>

void main(void)
{
	FILE* fp;
	int i = 12345;

	fp = fopen("C:\\Users\\mycom\\Desktop\\프로그래밍\\c\\file.txt","w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fprintf(fp, "%d", i);
		fclose(fp);
	}
}

