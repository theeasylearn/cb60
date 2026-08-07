#include <stdio.h>
#define ROW 4
#define COLUMN 7
void main()
{
    // create 2d array
    // datatype array[row][column]
    int sales[ROW][COLUMN];
    int r, c,total=0;
    float average;
    for (r = 0; r < ROW; r++)
    {
        printf("Enter input for %d dish\n", r + 1);
        for (c = 0; c < COLUMN; c++)
        {
            printf("Enter input %d day sales", c + 1);
            scanf("%d", &sales[r][c]);
        }
    }

    for (r = 0; r < ROW; r++)
    {
        
        for (c = 0; c < COLUMN; c++)
        {
            printf("[%5d]",sales[r][c]);
            total = total + sales[r][c];
        }
        printf("\n");
    }
    average = (float)total / (ROW * COLUMN);
    printf("total = %d average = %f",total,average);
}