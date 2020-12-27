#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int n, enter = 0, i = 0, t = 0, j = 0;
	char a[100005];
	char* aPtr[205] = { 0 };
	char* m = NULL;
	scanf("%d", &n);
	getchar();
	while (enter < n)
	{
		a[i] = getchar();
		if (a[i] == '\n')
		{
			a[i] = '\0';
			enter++;
			aPtr[t] = &a[i - j];
			j = 0;
			t++;
		}
		else
			j++;
		i++;
	}
	for (i = 1; i <= n - 1; i++)
		for (j = 0; j <= n - i - 1; j++)
			if (strcmp(aPtr[j], aPtr[j + 1]) == 1)
			{
				m = aPtr[j];
				aPtr[j] = aPtr[j + 1];
				aPtr[j + 1] = m;
			}
	for (i = 0; i < n; i++)
		puts(aPtr[i]);
	return 0;
}