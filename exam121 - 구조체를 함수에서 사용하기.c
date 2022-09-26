#include <stdio.h>
#include <string.h>

void print(struct tagAddress* pad);

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 강남구");

	print(&ad);
}

void print(struct tagAddress* pad)
{
	printf("이름 : %s \n", pad->name);
	printf("전화 : %s \n", pad->phone);
	printf("주소 : %s \n", pad->address);
}