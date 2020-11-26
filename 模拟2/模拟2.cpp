#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int head, feet;
    int chick, bunny, fly;
    scanf("%d %d", &head, &feet);
    
    if (head * 4 <= feet)
    {
        bunny = feet / 2 - head;
        chick = head - bunny;
        fly = 0;
        for (; bunny >= 0; chick++, bunny -= 2, fly++)
            //if (chick + bunny + fly == head && chick * 2 + bunny * 4 + fly * 6 == feet)
            printf("%d %d %d\n", chick, bunny, fly);
    }
        
    else if(head*4>feet)
    {
        bunny=feet/4
        chick = 0;
        for (; bunny >= 0; chick++, bunny -= 2, fly++)
            printf("%d %d %d\n", chick, bunny, fly);
    }
}
