// 100 99 97 94 90 85 79 72 64 55 45 34 22 9

#include <stdio.h>
void main()
{
    int num = 100, gap = 1;
    do
    {
        printf("%d ", num);
        num = num - gap;
        gap = gap + 1;
    } while (num > 1);
}