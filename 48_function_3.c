#include <stdio.h>
//using * before argument name means receiving address of variable as argument(pointer variable)
void swap(int *a, int *b) // a = 10, b = 20
{
    int temp = *a; // 10
    *a = *b;        // 20
    *b = temp;     // 10
    printf("in swap function after swaping a = %d and b = %d", *a, *b);
}
void main()
{
   int a = 10, b = 20;
   swap(&a,&b); // used address of operator before argument name will pass address of variable into function 
   printf("\n in main function after swaping a = %d and b = %d", a, b);
}