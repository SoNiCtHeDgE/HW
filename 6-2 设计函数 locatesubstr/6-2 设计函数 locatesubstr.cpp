#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* locatesubstr(char* str1, char* str2);

int main()
{
    char str1[505], str2[505];
    char* p;
    gets_s(str1);
    gets_s(str2);
    p = locatesubstr(str1, str2);

    if (p == NULL)    printf("NULL!\n");
    else    puts(p);

    return 0;
}

char* locatesubstr(char* str1, char* str2)
{
    int isEqual = 0;
    char* loc=NULL;
    for (int i=0; *(str1+i)!='\0';i++)
    {
        if (*(str1 + i) == *str2)
        {
            loc = &str1[i];
            isEqual = 1;
            for (int j = 0; *(str2+j) != '\0'; i++,j++)
            {
                if (*(str1 + i) != *(str2 + j))
                {
                    isEqual = 0;
                    loc = NULL;
                    break;
                }
            }
            if (loc != NULL) return loc;
        }
    }
    return NULL;
}