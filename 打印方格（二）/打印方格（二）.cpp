#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void head(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("+--");
    }
    printf("+\n");
}
void frame(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("|  ");
    }
    printf("|\n");
}
void middle(int a)
{
    printf("|");
    for (int i = 1; i < a; i++)
    {
        printf("--+");
    }
    printf("--|\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    int r, c;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &r, &c);
        for (int j = 0; j < r; j++)
        {
            head(c);
            frame(c);
            middle(c);
            frame(c);
        }
        head(c);
    }
}