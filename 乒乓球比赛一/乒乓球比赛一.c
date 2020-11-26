#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void AWin();
void BWin();
void NoWin();
void Err();
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a < 10 && b <= 10) || (a <= 10 && b < 10))          NoWin();
    else if (a == 11 && b < 10)                              AWin();
    else if (a < 10 && b == 11)                              BWin();
    else if (a >= 10 && b >= 10)
    {
        if (abs(a - b) < 2)                                  NoWin();
        else if (a - b == 2)                                 AWin();
        else if (b - a == 2)                                 BWin();
        else                                                 Err();
    }
    else                                                     Err();

}
void AWin()
{
    printf("A win\n");
}
void BWin()
{
    printf("B win\n");
}
void NoWin()
{
    printf("no result\n");
}
void Err()
{
    printf("error\n");
}