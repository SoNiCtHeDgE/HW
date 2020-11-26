#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	
	if (fabs(a-0) <= 1e-6)
		printf("The equation is not quadratic.\n");																//a==0结束战斗
	else
	{
		float d = pow(b, 2) - 4 * a * c;
		if (fabs(d - 0) <= 1e-6)
			printf("The equation has two equal roots: %.4f.\n", -b / (a * 2));									//d==0结束战斗
		else if (d > 0)
		{
			float x1 = (-b + sqrt(d)) / (a * 2);
			float x2 = (-b - sqrt(d)) / (a * 2);
			if (x1 < x2)
			{
				x1 = x1 + x2;
				x2 = x1 - x2;
				x1 = x1 - x2;
			}
			printf("The equation has two distinct real roots: %.4f and %.4f.\n", x1, x2);						//d>0
		}
		else if (d < 0)
		{
			float y = sqrt(-d) / (a * 2);
			if (fabs(b - 0) <= 1e-6)
			{
				printf("The equation has two complex roots: %.4fi and -%.4fi.\n", y, y);						//d<0且b==0
			}
			else
			{
				float x = -b / (a * 2);
				printf("The equation has two complex roots: %.4f+%.4fi and %.4f-%.4fi.\n", x, y, x, y);			//d<0且b!=0
			}
		}
	}
}