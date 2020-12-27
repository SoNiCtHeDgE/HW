#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Sort(char* ptr[], int count);
int Comp(char* p1, char* p2);

int main()
{
	int qtyOfStr;
	scanf("%d\n", &qtyOfStr);
	char** ptrOfStr=(char**)malloc(qtyOfStr * sizeof(char*));
	for (int no = 0; no < qtyOfStr; no++)
	{
		ptrOfStr[no] = (char*)malloc(sizeof(char) * 1000);
	}
	for (int no = 0; no < qtyOfStr; no++)
	{
		gets_s((ptrOfStr[no]), sizeof(char)*1000);
	}


	Sort(ptrOfStr, qtyOfStr);


	for (int no = 0; no < qtyOfStr; no++)
	{
		printf("%s\n",(ptrOfStr[no]));
	}

	for (int no = 0; no < qtyOfStr; no++)
	{
		free(ptrOfStr[no]);
	}
	free(ptrOfStr);
}

void Sort(char* ptr[], int count)
{
	char* temp;
	for (int limiter = count - 1; limiter > 0; limiter--)
	{
		for (int index = 0; index < limiter; index++)
		{
			if (Comp(ptr[index],ptr[index+1]))
			{
				temp = ptr[index];
				ptr[index] = ptr[index + 1];
				ptr[index + 1] = temp;
			}

		}
	}
}

int Comp(char* p1, char* p2)
{
	for (int i = 0;; i++)
	{
		if (*(p1 + i) > * (p2 + i))
			return 1;
		else if (*(p1 + i) < *(p2 + i))
			return 0;
	}
}