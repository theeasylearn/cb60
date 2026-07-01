/* write a program to find whether person is eligible to get driving licence or not 
  valid range is 18 to 65 
 */
#include<stdio.h>
void main()
{
    int age;
    printf("Enter age");
    scanf("%d",&age);

    if(age>17 && age<66)
    {
        printf("you are eligible to get driving licence");
    }
    else 
    {
        printf("you are not eligible to get driving licence");
    }
}