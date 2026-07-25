#include <stdio.h>
// create function (function declaration)
// return type function-name(argument/input)
//  with return value with argument function
int sum(int num1, int num2)
{
    // code
    // variable create (local variable)
    // variable declared inside function is called local variable
    int answer = num1 + num2;
    return answer;
}
// create function (function declaration)

int sub(int x, int y)
{
    int answer = x - y;
    return answer;
}
// without return value without argument
void printLine()
{
    printf("\n");
    for (int i = 1; i <= 100; i++)
    {
        printf("-");
    }
    printf("\n");
}
// without return value with argument function
void printLetter(char letter, int count)
{
    printf("\n");
    for (int i = 1; i <= count; i++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
// with return value without argument
float getPi()
{
    float pi = 22 / 7.0;
    return pi;
}
void main()
{
    int num1, num2, answer;
    float area, radius, pi;
    printLine();
    printf("\n enter value for num1");
    scanf("%d", &num1);

    printLetter('~', 110);
    printf("\n enter value for num2");
    scanf("%d", &num2);

    // use/call/execute sum function
    answer = sum(num1, num2);
    printLine();
    printf("sum = %d", answer);

    answer = sub(num1, num2);
    printLine();
    printf("\n subtraction = %d", answer);
    printLetter('^', 90);

    printf("Enter radius of circle");
    scanf("%f", &radius);
    pi = getPi();
    area = pi * radius * radius;
    printf("Area = %f", area);
}