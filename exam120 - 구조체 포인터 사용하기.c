#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;
	struct tagAddress* pad;

	pad = &ad;

	strcpy((*pad).name, "홍길동");
	strcpy((*pad).phone, "02-1234-5678");
	strcpy((*pad).address, "서울시 강남구");

	printf("이름 : %s \n", pad->name);
	printf("전화 : %s \n", pad->phone);
	printf("주소 : %s \n", pad->address);
}