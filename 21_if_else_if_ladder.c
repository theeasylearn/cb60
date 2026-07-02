/*
    write a program to accept 2 number from user do addition or subtraction or multiplication or division & display result. based upon choice given by user
*/
#include <stdio.h>
void main()
{
    float num1, num2, result;
    int choice;
    printf("Enter 1st number");
    scanf("%f", &num1);

    printf("Enter 2nd number");
    scanf("%f", &num2);

    printf(" Press 1 for addition \n Press 2 for subtraction \n Press 3 for multiplication \n Press 4 for division \n Enter your choice");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = num1 + num2;
    }

    else if (choice == 2)
    {
        result = num1 - num2;
    }

    else if (choice == 3)
    {
        result = num1 * num2;
    }

    else if (choice == 4)
    {
        result = num1 / num2;
    }
    printf("\n result = %f ",result);
}