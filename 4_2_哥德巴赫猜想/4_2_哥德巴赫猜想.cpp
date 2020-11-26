#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int input)
{
    for (int i = 2; i <input; i++)
    {
        if (input % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 2; i <= number / 2; i++)
    {
        if (isPrime(i) && isPrime(number - i))
            printf("%d and %d\n", i, number - i);
    }
}

