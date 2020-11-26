#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char num[10];
    int i;
    scanf("%s\0", &num);
    for (i = 0; num[i] != '\0'; i++)
    {}
    for (int index = 0; index<i-1; index++)
    {
        printf("%c ", num[index]);
    }
    printf("%c\n",num[i-1]);
}
