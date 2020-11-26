#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[100];
	scanf("%s\0\n", &string);
	for (int i = 0; i<100&&string[i]!='\0'; i++)
	{
	if ((string[i] >= 'a' && string[i] < 'x') || (string[i] >= 'A' && string[i] < 'X'))
		string[i] = string[i] + 3;
	else
		string[i] = string[i] - 23;
	}
	printf("%s\n",string);
}
