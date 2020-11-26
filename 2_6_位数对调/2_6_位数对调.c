#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int first, second, third, num;
	scanf("%d", &num);
	if (num % 10 == 0)
		printf("The number cannot be changed.\n");
	else
	{
		first = num / 100;
		third = num % 10;
		second = num / 10 % 10;
		printf("%d\n", first + second * 10 + third * 100);
	}
}
