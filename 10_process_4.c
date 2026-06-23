/*
    write a program to print reverse of two digit given number
    input : 35 output 53
    input : 50 output 05
    input : 19 output 91
*/
#include <stdio.h>
void main()
{
    int number, first, last;
    printf("enter 2 digit number");
    scanf("%d", &number);

    first = number / 10; // 1
    last = number % 10; //9 
    number = (last * 10) + first;
    printf("%d",number);
}