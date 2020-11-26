#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    if (a % b != 0)
        GCD(b, a % b);
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d\n", GCD(a, b));

    return 0;
}