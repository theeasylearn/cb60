// create an array to store 5 subject marks of 1 student, calculate total & average and display it
#include <stdio.h>
// create constant
#define SIZE 7
void main()
{
    // create array
    int marks[SIZE], index = 0, total = 0;
    float percentage;
    // store marks in 1st subject
    while (index < SIZE)
    {
        printf("Enter marks for subject %d", index + 1);
        scanf("%d", &marks[index]);
        index = index + 1;
    }

    for (index = 0; index < SIZE; index++)
    {
        total = total + marks[index];
    }
    percentage = total / SIZE;
    index = 0;
    do
    {
        printf("%d subject marks %d \n", index + 1, marks[index]); // 50
        index = index + 1;
    } while (index < SIZE);
    printf("total = %d percentage = %f", total, percentage);
}