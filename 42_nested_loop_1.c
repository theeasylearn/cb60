/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{

    for (int row = 1; row <= 5; row++) //3
    {
        for (int astrik = 1; astrik <= row; astrik++)
        {
            printf("* ");
        }
        printf("\n");
    }
}