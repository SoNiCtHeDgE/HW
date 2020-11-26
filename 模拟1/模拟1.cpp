#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count;
    int ct[8] = { 0,0,0,0,0,0,0,0 };
    int temp;
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &temp);

        switch (temp)
        {
            case 0:ct[0]++; break;
            case 1:ct[1]++; break;
            case 2:ct[2]++; break;
            case 3:ct[3]++; break;
            case 4:ct[4]++; break;
            case 5:ct[5]++; break;
            case 6:ct[6]++; break;
            case 7:ct[7]++; break;
        }

    }
    for (int j = 7; j >= 0; j--)
    {
        if (ct[j] != 0)
        {
            printf("%d:%d\n", j, ct[j]);
        }
    }
}
