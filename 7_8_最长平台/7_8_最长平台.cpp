#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length, arr[1000];
	int lengthOfP=1, maxLengthOfP=1;
	scanf("%d", &length);
	for (int index = 0; index < length; index++)
	{
		scanf("%d", &arr[index]);
	}
	for (int index = 1; index < length; index++)
	{
		if (arr[index] == arr[index - 1])
			lengthOfP++;
		else
			lengthOfP = 1;

		if (lengthOfP > maxLengthOfP)
			maxLengthOfP = lengthOfP;
	}
	printf("%d", maxLengthOfP);
}