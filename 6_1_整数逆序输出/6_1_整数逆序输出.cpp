#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int n)
{
    int digit = n % 10;
    if (n>=10||digit != 0)
    {
        printf("%d", digit);
        reverse(n / 10);
        
    }

}

int main()
{
    int n;

    scanf("%d", &n);
    reverse(n);
    printf("\n");
    return 0;
}