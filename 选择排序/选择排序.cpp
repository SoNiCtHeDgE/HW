#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int findMin(int data[], int startLoc, int endLoc)
{
    int minLoc=endLoc;
    for (int index = startLoc; index < endLoc; index++)
    {
        if (data[index] < data[minLoc])
            minLoc = index;
    }
    return minLoc;
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

void selectSort(int data[], int elementCount)
{
    int minLoc, temp;
    for (int limit = 0; limit < elementCount-1; limit++)
    {
        minLoc = findMin(data, limit, elementCount-1);

        temp = data[limit];
        data[limit] = data[minLoc];
        data[minLoc] = temp;

        OutputData(data, elementCount);
    }
}

int main()
{
    int n, i, num[1010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    selectSort(num, n);
    return 0;
}