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
	struct tagAddress ad[3];
	struct tagAddress* pad;
	int i;

	pad = ad; //배열변수 이므로 번지 지정 연산자(&)를 사용하지 않는다

	for (i = 0; i < 3; i++)
	{
		sprintf(pad[i].name, "홍길동 %d", i);
		strcpy(pad[i].phone, "02-1234-5678");
		strcpy(pad[i].address, "서울시 강남구");

	}

	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s \n", pad[i].name);
		printf("전화 : %s \n", pad[i].phone);
		printf("주소 : %s \n", pad[i].address);
	}
}