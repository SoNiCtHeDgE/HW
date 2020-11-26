#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int convert(int n)
{
    int sum;
    if (n >= 10)
    {
        sum=n%10+2*convert(n/10);
        return sum;
    }
    if (n < 10)
    {
        return n;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", convert(n));
    return 0;
}