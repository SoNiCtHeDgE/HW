#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int temp = 0;
    for (int limit = n-1; limit > 0; limit--)
    {
        for (int index=0; index<limit; index++)
        {
            if (a[index] > a[index + 1])
            {
                temp = a[index];
                a[index] = a[index + 1];
                a[index + 1] = temp;
            }
        }
    }
}

void OutputData(int data[], int elementCount)
{
    for (int index = 0; index < elementCount; index++)
    {
        printf("%d", data[index]);
        if (index - elementCount != -1)
            printf(" ");
    }
    printf("\n");
}

int main()
{
    int n, i, num[10010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    bubbleSort(num, n);
    OutputData(num, n);
    return 0;
}