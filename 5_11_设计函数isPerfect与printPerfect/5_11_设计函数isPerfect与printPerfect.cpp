#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//判断一个数是否为完全数的函数
int isPerfect(int num)
{
	int sum = 0;
	for (int i = 1; i <= num/2; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return 1;
	else
		return 0;
}

//打印完全数的函数 
void printPerfact(int num)
{
	if (isPerfect(num) == 1)
	{
		printf("%d=1", num);
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
				printf("+%d", i);
		}
		printf("\n");
	}
	
}

int main()
{
	int i, a, b, count;

	scanf("%d%d", &a, &b);
	count = 0;//a,b两数间完全数的数量，初始化为0 
	for (i = a; i <= b; i++)
	{
		if (isPerfect(i))  //如果是完全数 
		{
			printPerfact(i);//打印该完全数 
			count++;  //计数器加1 
		}
	}
	printf("The total number is %d.\n", count);//输出a,b两数间完全数的数量 
	return 0;
}