#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int mypow(int num, int index)
{
	int numo = num;
	for (int i = 1; i < index; i++)
	{
		num *= numo;
	}
	if (index == 0)
		return 1;
	return num;
}

int main()
{
	int x, n;

	scanf("%d%d", &x, &n);
	printf("%d\n", mypow(x, n));

	return 0;
}