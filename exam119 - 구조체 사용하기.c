#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30];
	char phone[20];
	char adress[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name,"홍길동");
	strcpy(ad.phone,"02-1234-5678");
	strcpy(ad.adress,"서울시 강남구");

	printf("name : %s \n", ad.name);
	printf("phone : %s \n", ad.phone);
	printf("adress : %s \n", ad.adress);

}	