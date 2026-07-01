/* write a program to display how many days month has in given calendar month
    input : month = 1 output this has 31 days 
    input : month = 4 output this has 30 days 
*/
#include<stdio.h>
void main()
{
    int month;
    printf("Enter calendar month (1 to 12)");
    scanf("%d",&month);
    if(month == 2)
    {
        printf("this month has 28/29 days");
        return;  //program stop here
    }
    //Jan, Mar, May, Jul, Aug, Oct, Dec
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("this month has 31 days");
    }
    else 
    {
        printf("this month has 30 days");
    }

}