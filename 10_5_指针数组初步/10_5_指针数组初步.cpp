#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getString(char* source, char* strPtr[]);
int main()
{
    char str[100005];
    char* strPtr[1005] = { 0 };

    int i, num;

    gets_s(str);
    num = getString(str, strPtr);
    for (i = 0; i < num; i++)
        puts(strPtr[i]);

    return 0;
}

/*int getString(char* str, char* strPtr[])
{
    int indexPtr = 1;
    int indexStr = 1;
    strPtr[0] = &str[0];

    for (; str[indexStr] != '\0'; indexStr++)
    {
        if (str[indexStr] == ' ')
        {
            str[indexStr] = '\0';
            strPtr[indexPtr] = &str[indexStr + 1];
            indexPtr++;
        } 
    }
    return indexPtr;
}*/

int getString(char* source, char* strPtr[])
{
    int i = 0, judge = 0;
    while (*source != '\0')
    {
        if (*source != ' ' && judge == 0)
        {
            strPtr[i] = source;
            judge = 1;
        }
        if (*source == ' ')
        {
            *source = '\0';
            i++;
            judge = 0;
        }
        source++;
    }
    return i+1;
}