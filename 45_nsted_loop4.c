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
    int astrik, space, row;
    row = 5;
    do
    {

        space = 1;
        // space/hash
        do
        {
            printf(" ");
            space++;
        } while (space <= row);
        // astrik
        astrik = 0;
        do
        {
            printf("* ");
            astrik++;
        } while (astrik <= 5 - row);
        printf("\n");
        row--;
    } while (row >= 1);
}