#include<stdio.h>
void main()
{
    //create variables
    //datatype name = value;
    /*
        Addition → સરવાળો (Sarvāḷo) or ઉમેરો
        Subtraction → બાદબાકી (Bādbākī) or ઘટાડો
        Multiplication → ગુણાકાર (Guṇākār)
        Division → ભાગાકાર (Bhāgākār)
    */
    int num1, num2, addition, subtraction, multiplication;
    float division;
    printf("Enter num1");
    scanf("%d",&num1);

    printf("enter num2");
    scanf("%d",&num2);

    //display 
    printf("num1 = %d, num2 = %d",num1,num2);

    //process(samikaran/expression)
    //variable-name = variable-name2 symbol(+-*/) variable-name3
    addition = num1 + num2;

    //subtraction 
    subtraction = num1 - num2;

    //multiplication 
    multiplication = num1 * num2;

    //division 
    division = (float) num1 / num2;

    printf("\n addition = %d",addition);
    printf("\n subtraction = %d",subtraction);
    printf("\n multiplication = %d",multiplication);
    printf("\n division = %f",division);

}