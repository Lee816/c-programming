#include <stdio.h>

void main(void)
{
	char cValue = 'a';
	int iValue = 1234567;
	long lValue = 7890123;
	float fValue = 3.141592;
	double dValue = 3.141592;
	char* string = "koea";
	char buffer[100];

	sprintf(buffer, "char���� %c", cValue);
	puts(buffer);

	sprintf(buffer, "int���� %d", iValue);
	puts(buffer);

	sprintf(buffer, "long���� %ld", lValue);
	puts(buffer);

	sprintf(buffer, "float���� %f", fValue);
	puts(buffer);

	sprintf(buffer, "double���� %e", dValue);
	puts(buffer);

	sprintf(buffer, "cahr* ���� %s", string);
	puts(buffer);
}