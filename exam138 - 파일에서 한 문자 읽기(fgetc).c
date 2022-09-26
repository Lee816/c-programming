#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\mycom\\Desktop\\프로그래밍\\c\\file.txt", "r");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		ch = fgetc(fp);
		printf("읽은 문자 : %c \n", ch);
		fclose(fp);
	}
}