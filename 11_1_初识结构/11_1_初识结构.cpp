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
void BubbleSort(int a[], int n);


int main()
{
	student LiHua;
	gets_s(LiHua.name, 21);
	gets_s(LiHua.id, 21);
	scanf("%d %d %d %d %d", &LiHua.score[0], &LiHua.score[1], &LiHua.score[2], &LiHua.score[3], &LiHua.score[4]);
    LiHua.total = LiHua.score[0] + LiHua.score[1] + LiHua.score[2] + LiHua.score[3] + LiHua.score[4];
    LiHua.avg = LiHua.total / 5.0;
    BubbleSort(LiHua.score, 5);
    printf("Name:%s\nID:%s\n", LiHua.name, LiHua.id);
    printf("Score:%d %d %d %d %d\n", LiHua.score[0], LiHua.score[1], LiHua.score[2], LiHua.score[3], LiHua.score[4]);
    printf("average:%.2f total:%d", LiHua.avg, LiHua.total);
}

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