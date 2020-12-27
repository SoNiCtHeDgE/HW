#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* arr, num;
	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int) * num);

	for (int index = 0; index < num; index++)
	{
		scanf("%d", arr + index);
		
	}

	for (int index = 0; index < num; index++)
	{
		*(arr + index) = *(arr + index) * -10;
		printf("%d", *(arr + index));
		if (num - index != 1)
			printf(" ");
	}
	//printf("\n");
	free(arr);
	arr = NULL;
}