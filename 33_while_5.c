// write a program to findout power of given number
// input : base 3 exponent 5
// 3 X 3 X 3 X 3 X 5
#include <stdio.h>
void main()
{
    int base, exponent, power, count;
    printf("enter base");
    scanf("%d", &base);

    printf("enter exponent");
    scanf("%d", &exponent);

    power = base; // 3
    count = 1;
    while (count < exponent)
    {
        power = power * base; // 9
        count = count + 1;
    }

    printf("%d", power);
}