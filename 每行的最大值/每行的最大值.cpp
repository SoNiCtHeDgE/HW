#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int iTemp;
	char cTemp;
	for (;;)
	{
		scanf("%d%c", &iTemp, &cTemp);
		printf("%d\t%c\n", iTemp, cTemp);
	}
}