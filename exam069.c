#include <stdio.h>
#include <string.h>

#define TOKEN " "

void main(void)
{
	char string[100];
	char* pos;

	puts("���ڿ��� �Է��� �� EnterŰ�� ��������");

	gets(string);

	pos = strpbrk(string, TOKEN);

	while (pos != NULL)
	{
		puts(pos++);

		pos = strpbrk(pos, TOKEN);
	}
}