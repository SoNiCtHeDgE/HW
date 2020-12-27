#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float data[6][5] = { 0 };
	int T;
	int prod, saler;
	float datum;


	scanf("%d", &T);
	for (int round = 0; round < T; round++)
	{
		scanf("%d %d %f", &saler, &prod, &datum);
		data[prod-1][saler-1] = datum;
	}

	for (int r = 0; r < 5; r++)
	{
		data[r][4] = data[r][0] + data[r][1] + data[r][2] + data[r][3];
	}
	for (int c = 0; c < 5; c++)
	{
		data[5][c] = data[0][c] + data[1][c] + data[2][c] + data[3][c] + data[4][c];
	}

	for (int r = 0; r < 6; r++)
	{
		for (int c = 0; c < 5; c++)
		{
			printf("%.1f", data[r][c]);
			if (c - 5 != -1)
				printf("\t");
		}
		printf("\n");
	}
}