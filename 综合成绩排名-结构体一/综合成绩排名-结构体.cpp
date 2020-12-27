#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
    char id[16];//学生账号 
    int total;    //综合成绩 
    int ce;    //机试成绩 
    int ws;    //加权成绩 
}STUDENT;

void Sort(STUDENT a[], int size);
void Swap(STUDENT* s1, STUDENT* s2);
int  Comp(STUDENT* s1, STUDENT* s2);

int main()
{
    STUDENT stu[100];
    int i, n;


    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d", stu[i].id, &stu[i].ce, &stu[i].ws);
        stu[i].total = stu[i].ce + stu[i].ws;
    }

    Sort(stu, n);
    for (i = 0; i < n; i++)
        printf("%s %d %d %d\n", stu[i].id, stu[i].total, stu[i].ce, stu[i].ws);

    return 0;
}

void Sort(STUDENT a[], int size)
{
    for (int limiter = size-1; limiter >0; limiter--)
    {
        for (int index = 0; index <limiter; index++)
        {
            if (Comp(&a[index+1], &a[index]))
                Swap(&a[index+1], &a[index]);
        }
    }
}

void Swap(STUDENT* s1, STUDENT* s2)
{
    STUDENT temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int Comp(STUDENT* s1, STUDENT* s2)
{
    if (s1->total > s2->total)
        return 1;
    else if (s1->total < s2->total)
        return 0;
    else if (s1->total == s2->total)
    {
        if (s1->ce > s2->ce)
            return 1;
        else if (s1->ce < s2->ce)
            return 0;
    }
}