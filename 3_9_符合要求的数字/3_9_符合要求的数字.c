#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int first, second, third, forth, fifth, result, j = 0;
	for (int i = 1; i <= n; i++)
	{
		result = i / m;
		first = i / 10000;
		second = (i - first * 10000) / 1000;
		third = (i - first * 10000 - second * 1000) / 100;
		forth = (i - first * 1000 - second * 1000 - third * 100) / 10;
		fifth = i - first * 10000 - second * 1000 - third * 100 - forth * 10;

		if (first * first + second * second + third * third + forth * forth + fifth * fifth == result)
		{
			printf("%d", i);
			j++;
			if (j % 5 == 0 && i < n)
				printf("\n");
			else if (j % 5 != 0 && i < n)
				printf("\t");
		}
	}
	if (j % 5 != 0)
		printf("\n");
}
