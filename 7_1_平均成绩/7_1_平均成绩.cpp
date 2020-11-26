#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count, num[100], sum = 0;
	scanf("%d", &count);
	for (int index = 0; index < count; index++)
	{
		scanf("%d", &num[index]);
		sum += num[index];
	}
	printf("%.2lf", sum / (double)count);
}