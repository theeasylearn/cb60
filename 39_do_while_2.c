// 100 99 97 94 90 85 79 72 64 55 45 34 22 9

#include <stdio.h>
// write a program to calculate lucky number for user from his birth date 
// birthdate = 22/07/2009
// lucky number 2 + 2 + 0 + 7 + 2 + 0 + 0 + 9  = 21

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