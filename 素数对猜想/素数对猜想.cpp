#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isPrime(int input)
{
    for (int i = 3; i < sqrt(input); i++)
    {
        if (input % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int N;
    int isContinuous = 0;
    int pairCount = 0;
    scanf("%d", &N);
    if (N % 2 == 0) N -= 1;
    for (int n = N; n > 2; n -= 2)
    {
        if (isContinuous == 1)
        {
            if (isPrime(n)) pairCount++;
            else isContinuous = 0;
        }
        else if (isPrime(n))
        {
            isContinuous = 1;
        }
    }
    printf("%d\n", pairCount);
}