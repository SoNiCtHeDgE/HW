
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int min, max;
//    int gcd, lcm;
//    scanf("%d %d", &min, &max);
//    if (min > max)
//    {
//        min = min + max;
//        max = min - max;
//        min = min - max;
//    }
//    for (int i = min; i >= 1; i--)
//    {
//        if (min % i==0 && max % i==0)
//        {
//            gcd = i;
//            break;
//        }
//    }
//    for (int j = max;; j++)
//    {
//        if (j % min==0 && j % max==0)
//        {
//            lcm = j;
//            break;
//        }
//    }
//    printf("%d %d", gcd, lcm);
//}
int main()
{
	int temp;					//临时变量，交换数据用
	int m, n, mConst, nConst;	//输入值
	int twoToThePowerOf = 1;	//提取2的倍数？
	int isNotEqual = 1;			//判断是否相等？？
	int gcd;					//最大公约数
	long lcm;				//最小公倍数
	scanf("%d %d", &m, &n);
	mConst = m;
	nConst = n;
	if (m == n)
		isNotEqual = 0;
	while (m % 2 == 0 && n % 2 == 0 && isNotEqual == 1)
	{
		m = m / 2;
		n = n / 2;
		twoToThePowerOf *= 2;
	}
	while (isNotEqual == 1)
	{
		if (m < n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		m = m - n;
		if (m == n)
			isNotEqual = 0;
	}
	gcd = twoToThePowerOf * m;
	lcm = mConst / gcd * nConst;
	printf("%d %ld", gcd, lcm);
	return 0;
}
