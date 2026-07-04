/* write program to findout most heavy person from 3 person weight */
#include<stdio.h>
void main()
{
    float weight1,weight2,weight3;

    printf("Enter 1st person weight");
    scanf("%f",&weight1);

    printf("Enter 2nd person weight");
    scanf("%f",&weight2);

    printf("Enter 3rd person weight");
    scanf("%f",&weight3);

    if(weight1>weight2)
    {
        if(weight1>weight3)
        {
            printf("1st person is most heavy person");
        }
        else 
        {
            printf("3rd person is most heavy person");
        }
    }
    else 
    {
        if(weight2>weight3)
        {
            printf("2nd person is most heavy person");
        }
        else 
        {
            printf("3rd person is most heavy person");
        }
    }
}