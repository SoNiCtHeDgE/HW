#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** graph, row, column;
	scanf("%d %d", &row, &column);
	graph = (int**)malloc(sizeof(int*) * row);
	for (int r = 0; r < row; r++)
	{
		graph[r] = (int*)malloc(sizeof(int) * column);
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
		{
			scanf("%d", &graph[r][c]);
		}
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
		{
			printf("%d", graph[r][c]*-10);
			if (column - c != 1)
				printf(" ");
		}
		printf("\n");
	}

	for (int r = 0; r < row; r++)
	{
		free(graph[r]);
	}
	free(graph);

}