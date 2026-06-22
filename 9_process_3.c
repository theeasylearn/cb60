// write a program to convert grams into kilograms and remaining grams 
// input : grams = 5500 output : 5 kg and 500 grams  
// input : grams = 1700 output : 1 kg and 700 grams  
// input : grams = 0750 output : 0 kg and 750 grams  
#include<stdio.h>
void main()
{
    int grams;
    float kg;

    printf("Enter grams");
    scanf("%d",&grams);

    kg = grams / 1000; 
    grams = grams % 1000;
    printf("kilograms = %.2f grams = %d",kg,grams);
}