#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int bracketL = 0, bracketR = 0;
	char str[101];
	scanf("%s", str);
	for (int index = 0; index < strlen(str); index++)
	{
		if (str[index] == '(')
			bracketL++;
		if (str[index] == ')')
			bracketR++;
		if (bracketL < bracketR)
			break;
	}
	if (bracketL == bracketR)
		printf("parentheses match!\n");
	else
		printf("parentheses do not match!\n");
}