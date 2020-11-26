#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double cal(double arg, int loop)
{
    double mul = 1;
    for (int i = 1; i <= loop; i++)
        mul *= i;
    mul = pow(arg, loop) / mul;
    return mul;
}

int main()
{
    double arg;
    scanf("%lf", &arg);
    double sum = 1;
    for (int loop = 1; fabs(cal(arg, loop)) >= 1e-8; loop++)
        sum += cal(arg, loop);
    printf("%.4lf", sum);
}
