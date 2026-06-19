//relational expression
#include <stdio.h>
void main()
{
    int a = 10, b = 20, c = 10, result;
    printf("a = %d b = %d c = %d", a, b, c);

    // check a and c variable has same value or not
    result = a == c;
    printf("\n %d = %d == %d", result, a, c);

    // check a and b variable has different value or not
    result = a != b;
    printf("\n %d = %d != %d", result, a, b);


    result = a < b;
    printf("\n %d = %d < %d", result, a, b);

    result = a > b;
    printf("\n %d = %d > %d", result, a, b);

    result = a <= c;
    printf("\n %d = %d <= %d", result, a, c);

    result = a >= b;
    printf("\n %d = %d >= %d", result, a, b);
}
