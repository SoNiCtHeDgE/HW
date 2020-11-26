#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int divisorSum(int dividend)
{
    int sum = 0;
    for (int i = 1; i < dividend; i++)
    {
        if (dividend % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int LowerBound, UpperBound, Limiter, ValidNumber=0, LastNumber=-1;
    scanf("%d %d %d", &LowerBound, &UpperBound, &Limiter);
    for (int i = UpperBound; i >= LowerBound; i--)
    {
        if (abs(i - divisorSum(i)) <= Limiter)
        {
            LastNumber = i;
            break;
        }
    }
    for (int i = LowerBound; i <= UpperBound && LastNumber != -1; i++)
    {
        if (abs(i - divisorSum(i)) <= Limiter)
        {
            ValidNumber++;
            if (ValidNumber % 5 == 0 || i == LastNumber)
                printf("%d\n", i);
            else
                printf("%d\t", i);
        }
    }
    if (ValidNumber == 0)
        printf("There is no proper number in the interval.\n");
}
