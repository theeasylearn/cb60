#include <stdio.h>
void swap(int a, int b) // a = 10, b = 20
{
    int temp = a; // 10
    a = b;        // 20
    b = temp;     // 10
    printf("in swap function after swaping a = %d and b = %d", a, b);
}
void main()
{
   int a = 10, b = 20;
   swap(a,b); // 10 20
   printf("\n in main function after swaping a = %d and b = %d", a, b);
}