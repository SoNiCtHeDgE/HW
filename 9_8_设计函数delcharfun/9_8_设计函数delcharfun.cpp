#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void delcharfun(char* str, char ch);

int main()
{
    char ch, str[110];

    scanf("%s", str);    //读入字符串 
    getchar();            //读取回车符号 
    scanf("%c", &ch);    //读入字符 
    delcharfun(str, ch);    //删除 
    printf("%s\n", str);    //输出删除后结果 
    return 0;
}

void delcharfun(char* str, char ch)
{
    for (int index = 0; index < 110;)
    {
        if (str[index] == ch)
        {
            for (int i = index; i < 110; i++)
                str[i] = str[i + 1];
        }
        else
            index++;
    }
}