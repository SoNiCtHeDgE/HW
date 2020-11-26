#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char single;
	scanf("%c", &single);
	while (single != '\n')
	{
		if ((single >= 'a' && single < 'x') || (single >= 'A' && single < 'X'))
			printf("%c", single + 3);
		else
			printf("%c", single - 23);
		scanf("%c", &single);
	}
	printf("\n");
}
