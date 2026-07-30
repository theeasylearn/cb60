// write a program that will findout maximum & minimum sales of restaurant from one week data
#include <stdio.h>
#define SIZE 7
void main()
{
    // create static array
    float sales[SIZE] = {1000.25, 885.40, 3500.90, 2500.75, 8500.00, 5000.70, 12000.89};
    float max, min;
    max = min = sales[0]; // chain assignment
    for (int index = 1; index < SIZE; index++)
    {
        if (max < sales[index])
        {
            max = sales[index];
        }
        if (min > sales[index])
        {
            min = sales[index];
        }
    }
    printf("maximum sales = %f minimum sales = %f", max, min);
}