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

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����� ������");

	print(&ad);
}

void print(struct tagAddress* pad)
{
	printf("�̸� : %s \n", pad->name);
	printf("��ȭ : %s \n", pad->phone);
	printf("�ּ� : %s \n", pad->address);
}