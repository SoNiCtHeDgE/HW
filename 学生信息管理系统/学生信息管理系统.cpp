#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	char id[11];
	char name[11];
	int score[3];
};

int Search(student stu[], int size, char search[]);


int main()
{
	int ops;					//操作次数
	int category;				//操作类型
	student tempStu = { NULL };	//临时学生数据
	int tempIndex;				//临时下标
	student stu[130] = { NULL };//数据库
	int size = 0;				//容量

	scanf("%d", &ops);
	for (int op = 0; op < ops; op++)
	{
		scanf("%d", &category);
		switch (category)
		{
		case 1://添加学生信息
			scanf("%s %s %d %d %d", tempStu.id, tempStu.name, &tempStu.score[0], &tempStu.score[1], &tempStu.score[2]);
			if (Search(stu, size, tempStu.id) == -1)
			{
				stu[size++] = tempStu;
				printf("Add success\n");
			}
			else
				printf("Students already exist\n");
			break;

		case 2://删除学生信息
			scanf("%s", tempStu.id);
			if (Search(stu, size, tempStu.id) != -1)
			{
				tempIndex = Search(stu, size, tempStu.id);
				for (int index = tempIndex; index < size - 1; index++)
				{
					stu[index] = stu[index + 1];
				}
				stu[--size] = { NULL };
				printf("Delete success\n");
			}
			else
				printf("Students do not exist\n");
			break;

		case 3://更改学生信息
			scanf("%s %d %d %d",tempStu.id, &tempStu.score[0], &tempStu.score[1], &tempStu.score[2]);
			if (Search(stu, size, tempStu.id) != -1)
			{
				tempIndex = Search(stu, size, tempStu.id);
				stu[tempIndex].score[0] = tempStu.score[0];
				stu[tempIndex].score[1] = tempStu.score[1];
				stu[tempIndex].score[2] = tempStu.score[2];
				printf("Update success\n");
			}
			else
				printf("Students do not exist\n");
			break;

		case 4://显示学生平均分
			scanf("%s", tempStu.id);
			if (Search(stu, size, tempStu.id) != -1)
			{
				tempIndex = Search(stu, size, tempStu.id);
				printf("Student ID:%s\nName:%s\n", stu[tempIndex].id, stu[tempIndex].name);
				printf("Average Score:%.1f\n", (stu[tempIndex].score[0] + stu[tempIndex].score[1] + stu[tempIndex].score[2]) / 3.0);
			}
			else
				printf("Students do not exist\n");
			break;
		}
	}
}

int Search(student stu[], int size, char search[])
{
	for (int index = 0; index < size; index++)
	{
		if (strcmp(stu[index].id, search) == 0)
			return index;
	}
	return -1;
}