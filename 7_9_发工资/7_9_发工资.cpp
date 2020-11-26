#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int salary, cash[7];
	scanf("%d", &salary);
	
	cash[0] = salary / 100;
	salary -= cash[0]*100;

	cash[1] = salary / 50;
	salary -= cash[1]*50;

	cash[2] = salary / 20;
	salary -= cash[2]*20;

	cash[3] = salary / 10;
	salary -= cash[3]*10;

	cash[4] = salary / 5;
	salary -= cash[4]*5;

	cash[5] = salary / 2;
	salary -= cash[5]*2;

	cash[6] = salary;

	for (int index = 0; index < 7; index++)
	{
		if (cash[index] != 0)
		{
			switch (index)
			{
			case 0:printf("100:%d\n", cash[index]); break;
			case 1:printf("50:%d\n", cash[index]); break;
			case 2:printf("20:%d\n", cash[index]); break;
			case 3:printf("10:%d\n", cash[index]); break;
			case 4:printf("5:%d\n", cash[index]); break;
			case 5:printf("2:%d\n", cash[index]); break;
			case 6:printf("1:%d\n", cash[index]); break;
			}
		}
	}
}