// write a program to findout profit or loss amount from given purchase and sales price of the project
#include <stdio.h>
void main()
{
    int purchase_price, sales_price, difference;

    printf("enter product purchase price");
    scanf("%d", &purchase_price);

    printf("enter sales price");
    scanf("%d", &sales_price);

    // process
    difference = sales_price - purchase_price;
    if (difference < 0) // < > <= >= == !=
    {
        printf("you have made loss of %d", difference);
    }
    
    if (difference > 0)
    {
        printf("you have earned profit of %d", difference);
    }
}
