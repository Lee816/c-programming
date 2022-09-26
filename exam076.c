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

	sprintf(buffer, "char형은 %c", cValue);
	puts(buffer);

	sprintf(buffer, "int형은 %d", iValue);
	puts(buffer);

	sprintf(buffer, "long형은 %ld", lValue);
	puts(buffer);

	sprintf(buffer, "float형은 %f", fValue);
	puts(buffer);

	sprintf(buffer, "double형은 %e", dValue);
	puts(buffer);

	sprintf(buffer, "cahr* 형은 %s", string);
	puts(buffer);
}