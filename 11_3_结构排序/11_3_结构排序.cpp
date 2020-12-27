#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct student
{
	char name[21];
	int score;
}STUDENT;

void Sort(STUDENT stu[], int count);
int Comp(STUDENT p1, STUDENT p2);




int main()
{
	STUDENT stu[100] = { NULL };
	int count;
	scanf("%d", &count);
	for (int no = 0; no < count; no++)
	{
		scanf("%s %d", stu[no].name, &stu[no].score);
	}

	Sort(stu, count);

	for (int no = 0; no < count; no++)
	{
		printf("Name:%s\n",stu[no].name);
		printf("total:%d\n\n", stu[no].score);
	}
}

void Sort(STUDENT stu[], int count)
{
	STUDENT temp;
	for (int limiter = count - 1; limiter > 0; limiter--)
	{
		for (int index = 0; index < limiter; index++)
		{
			if (Comp(stu[index], stu[index + 1]))
			{
				temp = stu[index];
				stu[index] = stu[index + 1];
				stu[index + 1] = temp;
			}

		}
	}
}

int Comp(STUDENT p1, STUDENT p2)
{
	if (p1.score < p2.score)
		return 1;
	else if (p1.score > p2.score)
		return 0;
	else if (p1.score == p2.score)
	{
		for (int i = 0;; i++)
		{
			if (p1.name[i] > p2.name[i])
				return 1;
			else if (p1.name[i] < p2.name[i])
				return 0;
		}
	}
	
}