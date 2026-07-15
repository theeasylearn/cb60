// 100 99 97 94 90 85 79 72 64 55 45 34 22 9
#include <stdio.h>
// write a program to check whether 3 digit given number is armstrong no or not
// input : 153
// 1x1x1 + 5x5x5 + 3x3x3 = 153
void main()
{
    int num, num2, reminder, qube, sum = 0;

    printf("Enter number to check is it armstrong no or not");
    scanf("%d", &num);
    num2 = num;
    do
    {
        reminder = num % 10;                   // 3
        qube = reminder * reminder * reminder; // 27
        sum = sum + qube;                      // 27
        num = num / 10;
    } while (num > 0);

    if (num2 == sum)
    {
        printf("this is armstrong number");
    }
    else
    {
        printf("this is not armstrong number");
    }
}