/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
#include <stdio.h>
void main()
{
    int astrik = 1, row = 5;
    while (row >= 1) //row = 3
    {
        while (astrik <= row) // 1 to 3
        {
            printf("* ");
            astrik++;
        }
        printf("\n"); // new line
        astrik = 1;
        row--;
    }

}