#include <stdio.h>
// write a program convert decimal number into binary number
void binary(int num)
{
    int reminder;
    if (num > 0)
    {
        reminder = num % 2; // 0
        num = num / 2;      // 4
        binary(num);        // recursion
        printf("%d ", reminder);
    }
}
void main()
{
    int num;
    printf("Enter number");
    scanf("%d", &num);
    binary(num); // 1st time function call
}