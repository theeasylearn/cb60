#include <stdio.h>
// write a program to print 1 to 10 using recursion
void printNum(int num)
{
    if (num <= 10)
    {
        printf("%d ", num);
        num++; //2
        printNum(num); //recursion
    }
    //printf("\n num = %d",num);
}
void main()
{
    int num = 1;
    printNum(num); //1st time
}