// create an array to store 5 subject marks of 1 student, calculate total & average and display it
#include <stdio.h>
void main()
{
    // create array
    int marks[5], index = 0, total = 0;
    float percentage;
    // store marks in 1st subject
    while (index < 5)
    {
        printf("Enter marks for subject %d", index + 1);
        scanf("%d", &marks[index]);
        index = index + 1;
    }

    for (index = 0; index < 5; index++)
    {
        total = total + marks[index];
    }
    percentage = total / 5;
    index = 0;
    do
    {
        printf("%d subject marks %d \n", index + 1, marks[index]); // 50
        index = index + 1;
    } while (index < 5);
    printf("total = %d percentage = %f", total, percentage);
}