#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1, j = 1, head; i <= n; i++)
	{
		head = n - i;
		while (j <= head)
		{
			printf(" "); j++;
		}
		j = 1;

		while (j <= 2 * i - 1)
		{
			printf("*"); j++;
		}
		j = 1;
		printf("\n");
	}
	for (int i = n-1, j = 1, head; i >=1; i--)
	{
		head = n - i;
		while (j <= head)
		{
			printf(" "); j++;
		}

		j = 1;
		while (j <= 2 * i - 1)
		{
			printf("*"); j++;
		}

		j = 1;
		printf("\n");
	}
}