#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

void main(void)
{
	char string[100];

	puts("문자열을 입력한 수 Enter키를 치세요");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

	do
	{
		gets(string);

		if (strlen(string) == 0)
			break;

		strlwr(string);
		puts(string);
	} while (1);
}