// 100 99 97 94 90 85 79 72 64 55 45 34 22 9

#include <stdio.h>
// write a program to calculate lucky number for user from his birth date
// birthdate = 22/07/2009
// lucky number 2 + 2 + 0 + 7 + 2 + 0 + 0 + 9  = 21

void main()
{
    int birthdate, reminder, sum = 0;
    printf("Enter birthdate");
    scanf("%d", &birthdate);
    do
    {
        reminder = birthdate % 10; // 1
        sum = sum + reminder;
        birthdate = birthdate / 10; // 121
    } while (birthdate > 0);
    printf("sum = %d", sum);
    
}