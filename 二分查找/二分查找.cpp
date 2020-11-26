#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1 
int BinarySearch(int a[], int n, int key)
{
    int boundD=0, boundU=n-1;
    for (; boundU >= boundD;)
    {
        if (a[(boundU + boundD) / 2] < key)
            boundD = 1+(boundU + boundD) / 2;
        else if (a[(boundU + boundD) / 2] > key)
            boundU = -1+(boundU + boundD) / 2;
        else if (a[(boundU + boundD) / 2] == key)
            return (boundU + boundD) / 2;
    }
    //if (a[boundU] == key)
    //    return boundU;
    //else if (a[boundD] == key)
    //    return boundD;
    //else
        return -1;
}

int num[2000010];

int main()
{
    int        n, m, i;
    int        key;

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", BinarySearch(num, n, key));
        if (i != m - 1) printf(" ");
        else printf("\n");
    }
    return 0;
}