#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int reverseNum(int num)
{

}*/

int reverseNum(int x) {

    double  y = x % 10;
    while (x / 10 > 0 || x / 10 < 0)
    {

        x = x / 10;
        y = y * 10 + x % 10;
    }
    return y;
}

int main()
{
	int num;

	scanf("%d", &num);
	printf("The reverse form of number %d is %d.\n", num, reverseNum(num));

	return 0;
}
