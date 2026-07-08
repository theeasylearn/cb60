// write a program to print following series
// 1 2 3 4 ...............................1000

#include <stdio.h>
void main()
{
    int count = 1;
    while(count<=1000)
    {
        printf("%d ", count);
        count = count + 1;
    }
}