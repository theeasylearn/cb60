#include <stdio.h>
void main()
{
    int a = 10, b = 3;
    printf("a = %d, b = %d \n ", a, b);
    // a = a + b;
    a += b;
    printf("after addition a = %d, b = %d \n ", a, b);
    // a = a - b;
    a -= b;
    printf("after subtraction a = %d, b = %d \n ", a, b);

    a *= b;
    // a = a * b;
    printf("after multiplication a = %d, b = %d \n ", a, b);

    a /= b;
    // a = a / b;
    printf("after division a = %d, b = %d \n ", a, b);

    // a = a % b;
    a %= b;
    printf("after modules a = %d, b = %d \n ", a, b);

}