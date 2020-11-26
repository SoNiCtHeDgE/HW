#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int lengthArr, lengthSch, arr[1000], sch[100];
	int numExists=0;

	scanf("%d", &lengthArr);
	for (int index = 0; index < lengthArr; index++)
	{
		scanf("%d", &arr[index]);
	}
	scanf("%d", &lengthSch);
	for (int index = 0; index < lengthSch; index++)
	{
		scanf("%d", &sch[index]);
	}


	for (int i = 0; i < lengthSch; i++)
	{
		numExists = 0;
		for (int j = 0; j < lengthArr; j++)
		{
			if (arr[j] == sch[i])
			{
				numExists = 1;
			    if (lengthArr == 1)
				printf("NULL\n");
				else if (j == 0)
					printf("%d\n", arr[1]);
				else if (j == lengthArr - 1)
					printf("%d\n", arr[lengthArr - 2]);
				else
					printf("%d %d\n", arr[j - 1], arr[j + 1]);
				break;
			}
		}
		if (numExists==0)
			printf("NULL\n");

	}
}