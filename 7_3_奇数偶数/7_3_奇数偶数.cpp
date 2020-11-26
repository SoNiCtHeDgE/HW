#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length, orig[200];
	int conv[200];
	scanf("%d", &length);
	for (int index = 0; index < length; index++)
	{
		scanf("%d", &orig[index]);
	}

	int indexConv = 0;

	for (int index = 0; index < length; index++)
	{
		if (orig[index] % 2 == 0)
		{
			conv[indexConv] = orig[index];
			indexConv++;
		}
	}
	for (int index = 0; index < length; index++)
	{
		if (orig[index] % 2 != 0)
		{
			conv[indexConv] = orig[index];
			indexConv++;
		}
	}
	for (int index = 0; index < length; index++)
	{
		printf("%d", conv[index]);
		if (length - index == 1)	break;
		printf(" ");
	}
	printf("\n");
}