#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int evaluation(int n, int a)
{
    int sum;
    if (n > -1)
    {
        sum=a*evaluation(n-1,a)+1;
        return sum;
    }

    else 
        return 1;
    
}
int main()
{
    int n, a;

    scanf("%d%d", &n, &a);
    printf("%d\n", evaluation(n, a));

    return 0;
}