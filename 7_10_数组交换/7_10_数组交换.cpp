#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length, arrA[10], arrB[10];
	scanf("%d", &length);
	for (int index = 0; index < length; index++)
	{
		scanf("%d", &arrA[index]);
	}
	for (int index = 0; index < length; index++)
	{
		scanf("%d", &arrB[index]);
	}

	int temp = 0;

	for (int index = 0; index < length; index++)
	{
		temp = arrA[index];
		arrA[index] = arrA[arrB[index]];
		arrA[arrB[index]] = temp;
	}

	for (int index = 0; index < length; index++)
	{
		printf("%d", arrA[index]);

		if (length - index == 1)
		{
			printf("\n");
			break;
		}

		printf(" ");


	}

}