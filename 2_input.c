#include<stdio.h>
void main()
{
    //create variable
    //datatype variable-name = value;
    int age;
    float weight;
    char gender;

    printf("Enter your gender (m=male,f=female)");
    scanf("%c",&gender);
    
    printf("enter your age");
    scanf("%d",&age);

    printf("Enter your weight");
    scanf("%f",&weight);

    printf("good bye");
}