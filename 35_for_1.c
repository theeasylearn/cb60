// write a program to print multiplication table for given number
/*
    input : 5
    5 X 1 =  5
    5 X 2 = 10
    5 X 3 = 15
    5 X 4 = 20
    5 X 5 = 25
    5 X 10 = 50
*/
#include <stdio.h>
void main()
{
    int num, multiplier, answer;
    printf("enter number");
    scanf("%d", &num);
    for (multiplier = 1; multiplier <= 10; multiplier = multiplier + 1)
    {
        answer = num * multiplier;
        printf("%d X %d =  %d \n", num, multiplier, answer);
    }
}