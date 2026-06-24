#include <stdio.h>
void main()
{
    int a = 10, b = 0;
    printf("a = %d, b = %d \n ", a, b);

    // b = a;     // copy value of a into b
    // a = a + 1; // increase a by 1
    // or
    b = a++;
    printf("after change a = %d, b = %d \n ", a, b);

    a = 10, b = 0;

    // a = a + 1; // a = 11
    // b = a;
    // or
    b = ++a;
    printf("after change a = %d, b = %d \n ", a, b);
    
}