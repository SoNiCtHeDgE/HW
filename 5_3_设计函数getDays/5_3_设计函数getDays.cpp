#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int	getDays(int year, int month)
{
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			return 29;
		else
			return 28;
	}
	else
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:return 31;
		case 4:
		case 6:
		case 9:
		case 11:return 30;
		}
	}
}

int main()
{
	int	year, month;

	scanf("%d%d", &year, &month);
	printf("There are %d days in month %d year %d.", getDays(year, month), month, year);

	return 0;
}