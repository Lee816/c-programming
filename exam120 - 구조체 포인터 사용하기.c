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

	strcpy((*pad).name, "ȫ�浿");
	strcpy((*pad).phone, "02-1234-5678");
	strcpy((*pad).address, "����� ������");

	printf("�̸� : %s \n", pad->name);
	printf("��ȭ : %s \n", pad->phone);
	printf("�ּ� : %s \n", pad->address);
}