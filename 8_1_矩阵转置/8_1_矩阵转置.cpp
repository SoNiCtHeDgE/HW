#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[100][100];
	int row, column;
	scanf("%d %d", &row, &column);
	for (int indexR = 0; indexR < row; indexR++)
	{
		for (int indexC=0; indexC < column; indexC++)
		{
			scanf("%d", &arr[indexR][indexC]);
		}
	}

	for (int indexC = 0; indexC < column; indexC++)
	{
		for (int indexR=0; indexR < row; indexR++)
		{
			printf("%d", arr[indexR][indexC]);
			if (indexR - row != -1)
				printf(" ");
		}
		printf("\n");
	}
}