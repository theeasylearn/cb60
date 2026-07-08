// write a program to print following series
// 1000 998 996 .............................. 100

#include <stdio.h>
void main()
{
    int count = 1000;
    while(count>=100)
    {
        printf("%d ", count);
        count = count - 2; //996
    }
}