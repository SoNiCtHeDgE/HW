#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int getDigit(long long n)
{
	int length = 0;
	for (unsigned long long times = 1;; times*=10,length++)
	{
		if (n < times)
			return length;
	}
}

int main()
{
	long long n;
	int	len;

	scanf("%lld", &n);
	len = getDigit(n);
	if (len > 1)
		printf("The integer %lld has %d digits.\n", n, len);
	else
		printf("The integer %lld has %d digit.\n", n, 1);
	return 0;
}