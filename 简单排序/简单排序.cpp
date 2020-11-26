#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubbleSort(int a[], int n);


void outputData(int data[], int elementCount);

int main()
{
    int n, i, num[10010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    bubbleSort(num, n);
    outputData(num, n);
    return 0;
}
