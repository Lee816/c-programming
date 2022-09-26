#include <stdio.h>
#include <string.h>

void main(void)
{
	char string[100];
	char string2[100];

	printf("첫 번째 단어를 입력하세요. \n");
	gets(string);

	printf("두 번째 단어를 입력하세요. \n");
	gets(string2);

	strcat_s(string,100,string2);

	puts(string);

}