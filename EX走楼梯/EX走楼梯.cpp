﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//long long fac(int num)
//{
//	long long product=1;
//	for (int i = 1; i <= num; i++)
//	{
//		product *= i;
//	}
//	return product;
//}
//
//long long comb(int root, int head)
//{
//	long long result = fac(root) / (fac(head) * fac(root - head));
//	return result;
//}

//int main()
//{
	/*int stairs;
	scanf("%d", &stairs);
	int single=stairs, pair=0;
	long long sum=0;
	for (; single >= 0; single -= 2, pair++)
	{
		sum += comb(single + pair, pair);
	}
	printf("%lld", sum);*/
//}

int stairs, len = 1;
short f[5003][5003];//f[k][i]--第k阶台阶所对应的走法数 
void hp(int k)//高精度加法，k来存阶数 
{
    int i;
    for (i = 1; i <= len; i++)
        f[k][i] = f[k - 1][i] + f[k - 2][i];//套用公式 
    for (i = 1; i <= len; i++)             //进位 
        if (f[k][i] >= 10)
        {
            f[k][i + 1] += f[k][i] / 10;
            f[k][i] = f[k][i] % 10;
            if (f[k][len + 1])len++;
        }
}
int main()
{
    int i;
    scanf("%d", &stairs);
    f[1][1] = 1; f[2][1] = 2;         //初始化 
    for (i = 3; i <= stairs; i++)              //从3开始避免越界 
        hp(i);
    for (i = len; i >= 1; i--)             //逆序输出 
        printf("%d", f[stairs][i]);
    return 0;
}