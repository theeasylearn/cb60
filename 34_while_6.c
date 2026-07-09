// write a program to findout factorial of given number
// input : number 6
// 5 x 4 x 3 x 2 x 1 = 720
#include <stdio.h>
void main()
{
    int num, factorial;
    printf("Enter number");
    scanf("%d", &num);
    factorial = num;
    while (num > 1)
    {
        num = num - 1;
        factorial = num * factorial;
    }
    printf("factorial = %d", factorial);
}