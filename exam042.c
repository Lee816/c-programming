#include <stdio.h>

int length(char* pstr);

main()
{
	int len = length("abcde");

	printf("???? = %d", len);

}

int length(char* pstr)
{
	int len = 0;

	while (*pstr != NULL)
	{
		pstr++;
		len++;
	}
	return len;
}