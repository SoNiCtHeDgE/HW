#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, result=1;
	scanf("%d %d", &a, &b);
	for (; b > 0; b--)
	{
		result = result * a;
	}
	printf("%d\n", result);
}