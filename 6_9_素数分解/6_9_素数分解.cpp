#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int input)
{
    for (int i = 2; i < input; i++)
    {
        if (input % i == 0)
            return 0;
    }
    return 1;
}

void printFactor(int num, int counter)
{
    if (counter == 1)
        printf("%d=", num);
    else
        printf("*");

    if (isPrime(num))
        printf("%d", num);
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                printFactor(num / i, counter + 1);
                break;
            }
        }
    }

    if (counter == 1)
        printf("\n");
}

int main()
{
    int a, b, i;

    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
        printFactor(i, 1);

    return 0;
}