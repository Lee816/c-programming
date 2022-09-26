#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\mycom\\Desktop\\프로그래밍\\c\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputc('A', fp);
		puts("문자'A'를 파일에 저장했습니다.");
		fclose(fp);

	}
}