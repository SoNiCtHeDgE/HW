#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void MergeSort(int num[], int lo, int hi);
void Merge(int num[], int lo, int md, int hi);

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
    int n, i, num[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    MergeSort(num, 0, n);
    OutputData(num, n);
    return 0;
}

void MergeSort(int num[], int lo, int hi)
{
    if (hi - lo < 2) return;
    MergeSort(num, lo, (hi + lo) / 2);
    MergeSort(num, ((hi + lo) / 2), hi);
    Merge(num, lo, (hi + lo) / 2, hi);
}

void Merge(int num[], int lo, int md, int hi)
{
    int* arr1 = (int*)malloc(sizeof(int) * (md - lo));
    int* arr2 = (int*)malloc(sizeof(int) * (hi - md));
    int i1 = 0, i2 = 0;

    for (int i = 0; i < md - lo; i++)
    {
        arr1[i] = num[lo + i];
    }
    for (int i = 0; i < hi - md; i++)
    {
        arr2[i] = num[md + i];
    }

    for (int i = lo; i < hi; i++)
    {
        if (i1 == md - lo)
            num[i] = arr2[i2++];
        else if (i2 == hi - md)
            num[i] = arr1[i1++];
        else if (arr1[i1] <= arr2[i2])
            num[i] = arr1[i1++];
        else if (arr1[i1] > arr2[i2])
            num[i] = arr2[i2++];
    }

    free(arr1); free(arr2);
}