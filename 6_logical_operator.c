#include <stdio.h>
void main()
{
    int a = 10, b = 20, c = 30, d = 40, result;
    printf("a = %d b = %d c = %d d = %d", a, b, c, d);

    // we must use logical operator between 2 relational expression
    result = a < b && c < d;
    printf("\n %d = %d < %d && %d < %d", result, a, b, c, d);

    result = a < b && c > d;
    printf("\n %d = %d < %d && %d > %d", result, a, b, c, d);

    result = a > b && c > d;
    printf("\n %d = %d > %d && %d > %d", result, a, b, c, d);

    result = a < b || c > d;
    printf("\n %d = %d < %d || %d > %d", result, a, b, c, d);

    result = a > b || c > d;
    printf("\n %d = %d > %d || %d > %d", result, a, b, c, d);

    result = !(a < b || c > d);
    printf("\n !(%d = %d < %d || %d > %d)", result, a, b, c, d);

}