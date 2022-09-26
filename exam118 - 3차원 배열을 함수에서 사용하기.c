#include <stdio.h>

void calc(int(*pjumsu)[100][3], int* ptotal);

void main(void)
{
	int jumsu[10][100][3];
	int total[3] = { 0, };

	calc(jumsu, total);

	printf("all class korean total score : %d \n", total[0]);
	printf("all class english total score : %d \n", total[1]);
	printf("all class math totoal score : %d \n", total[2]);

}

void calc(int(*pjumsu)[100][3], int* ptotal)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++)
		{
			pjumsu[i][j][0] = 92;
			pjumsu[i][j][1] = 90;
			pjumsu[i][j][2] = 95;

		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++)
		{
			ptotal[0] += pjumsu[i][j][0];
			ptotal[1] += pjumsu[i][j][1];
			ptotal[2] += pjumsu[i][j][2];
		}
	}
}