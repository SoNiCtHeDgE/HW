#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Input(char str[], char* ptr[], int count);
void Output(char* ptr[], int count);
void Sort(char* ptr[], int count);
int Comp(char* p1, char* p2);

int main()
{
	char str[100000] = {'\0'};
	
	char* ptr[100] = {NULL};
	int count;
	scanf("%d\n", &count);

	Input(str, ptr, count);
	Sort(ptr, count);
	Output(ptr, count);

	


}

void Input(char str[], char* ptr[], int count)
{
	char strTemp[100000] = { '\0' };
	ptr[0] = str;
	for (int number = 0; number < count; number++)
	{
		gets(ptr[number]);//这玩意儿不给用
		if (number < 99)
			ptr[number + 1] = ptr[number] + strlen(ptr[number]) + 1;
	}
}

void Output(char* ptr[], int count)
{
	for (int number = 0; number < count; number++)
	{
		printf("%s\n", ptr[number]);
	}
}

void Sort(char* ptr[], int count)
{
	char* temp;
	for (int limiter = count - 1; limiter > 0; limiter--)
	{
		for (int index = 0; index < limiter; index++)
		{
			if (Comp(ptr[index], ptr[index + 1]))
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
	for (int i=0;;i++)
	{
		if (*(p1 + i) > * (p2 + i))
			return 1;
		else if (*(p1 + i) < *(p2 + i))
			return 0;
	}
}