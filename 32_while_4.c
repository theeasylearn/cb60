// write a program to print following series
// 1 4 9 16 25 36 49 ...... 1000
// 1 2 3 4  5  6  7
#include <stdio.h>
void main()
{
    int num = 1;

    while(num<=31)
    {
        printf("%d ", num * num); // 1
        num++;
    }
}