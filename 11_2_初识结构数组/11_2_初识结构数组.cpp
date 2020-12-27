#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student
{
    char name[21];
    char id[21];
    int score[5];
    int total;
    float avg;
};
//void BubbleSort(int a[], int n);


int main()
{
    student stu[100];
    int count;
    scanf("%d\n", &count);
    for (int c = 0; c < count; c++)
    {
        gets_s(stu[c].name, 21);
        gets_s(stu[c].id, 21);
        scanf("%d %d %d %d %d", &stu[c].score[0], &stu[c].score[1], &stu[c].score[2], &stu[c].score[3], &stu[c].score[4]);
        getchar();
        stu[c].total = stu[c].score[0] + stu[c].score[1] + stu[c].score[2] + stu[c].score[3] + stu[c].score[4];
        stu[c].avg = stu[c].total / 5.0;
    }
    //BubbleSort(stu.score, 5);
    for (int c = 0; c < count; c++)
    {
        printf("Name:%s\nID:%s\n", stu[c].name, stu[c].id);
        printf("Score:%d %d %d %d %d\n", stu[c].score[0], stu[c].score[1], stu[c].score[2], stu[c].score[3], stu[c].score[4]);
        printf("average:%.2f total:%d\n\n", stu[c].avg, stu[c].total);
    }

}
/*
void BubbleSort(int a[], int n)
{
    int temp = 0;
    for (int limit = n - 1; limit > 0; limit--)
    {
        for (int index = 0; index < limit; index++)
        {
            if (a[index] < a[index + 1])
            {
                temp = a[index];
                a[index] = a[index + 1];
                a[index + 1] = temp;
            }
        }
    }
}
*/