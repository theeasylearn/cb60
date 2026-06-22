// write a program to calculate yearly income & tax & net income from user given monthly income. tax rate is 10%
#include <stdio.h>
void main()
{
    unsigned int monthly_income,annual_income;
    float tax,net_income; 
    printf("\n enter monthly income");
    scanf("%u", &monthly_income);

    //variable-name = variable-name symbol/operator variable-name/value
    annual_income = monthly_income * 12;
    //calculate tax 
    tax = (annual_income * 10.0) / 100;
    //net income 
    net_income = annual_income - tax;
    printf("annual/yearly income = %u tax = %.2f net income = %.2f",annual_income,tax,net_income);
}