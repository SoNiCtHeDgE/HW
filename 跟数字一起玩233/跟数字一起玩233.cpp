#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void TimesTwo(int num[], int length)
{
	int addNext = 0;
	for (int i = length-1; i >= 0; i--)
	{
		num[i] *= 2;
		if (addNext == 1)	num[i] += 1;
		if (num[i] <= 9)
			addNext = 0;
		if (num[i] > 9)
		{
			num[i] %= 10;
			addNext = 1;
		}
	}
}

int main()
{
	int digit[10] = { 0 };
	int num[20];
	int length = 0;
	char temp;
	int match = 1;
	temp = getchar();
	for (; temp != '\n'; temp = getchar())
	{
		num[length] = temp - '0';
		length++;
	}
	if (num[0] >= 5)
	{
		TimesTwo(num, length);
		printf("No\n1");
		for (int i = 0; i < length; i++)
		{
			printf("%d", num[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			digit[num[i]]++;
		}
		TimesTwo(num, length);
		for (int i = 0; i < length; i++)
		{
			digit[num[i]]--;
		}
		for (int i = 0; i <= 9; i++)
		{
			if (digit[i] != 0)
			{
				match = 0;
				break;
			}
		}

		if (match == 1) printf("Yes\n");
		else if (match == 0) printf("No\n");
		for (int i = 0; i < length; i++)
		{
			printf("%d", num[i]);
		}
		printf("\n");


	}


}