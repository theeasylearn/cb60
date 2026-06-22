// write a program to calculate yearly income from user given monthly income
#include <stdio.h>
void main()
{
    unsigned int monthly_income,annual_income;
    printf("\n enter monthly income");
    scanf("%u", &monthly_income);

    //variable-name = variable-name symbol/operator variable-name/value
    annual_income = monthly_income * 12;
    printf("annual/yearly income = %u",annual_income);
}