// write a program to print below series
/*
    1 -8   27 -64 125 ............. 1000
    1  -2  3  -4  5
*/
#include <stdio.h>
void main()
{
    int num, qube = 1, reminder;

    for (num = 1; num <= 10; num = num + 1)
    {
        qube = num * num * num;
        reminder = num % 2;
        if (reminder == 0)
        {
            qube = -qube;
        }
        printf("%d ", qube);
    }
}