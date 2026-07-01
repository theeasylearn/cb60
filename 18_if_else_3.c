// write a program to findout which shape is bigger in 2 shape from given length and width
#include <stdio.h>
void main()
{
    // create variable
    int length1, width1, length2, width2, area1, area2;

    printf("enter length of shape 1");
    scanf("%d", &length1);

    printf("enter width of shape 1");
    scanf("%d", &width1);

    printf("enter length of shape 2");
    scanf("%d", &length2);

    printf("enter width of shape 2");
    scanf("%d", &width2);
    // find area of 1st shape
    area1 = length1 * width1;
    // find area of 2nd shape
    area2 = length2 * width2;
    if (area1 > area2) // #<> <= >= == !=
    {
        printf("1st shape is bigger");
    }
    else
    {
        printf("2nd shape is bigger");
    }
    
}