#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int countBinary(int n)
{
    /*int sum;
    if (n >= 2)
        sum = 1 + countBinary(n / 2);
    else if (n < 2)
        return 1;
    return sum;*/
    if (n == 0)
        return 1;
    else
    {
        int i;
        for (i = 0; n != 0; i++)
            n = n / 2;
        return i;
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", countBinary(n));
    return 0;
}