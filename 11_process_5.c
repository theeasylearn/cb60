/*
    write a program to convert given minutes into hours and remaining minutes.
    input : 95 minutes hours :  1 hours and 35 minutes 
    input :s 125 minutes hour : 2 hours and 5 minutes 
*/
#include <stdio.h>
void main()
{
    int hours,minutes;
    printf("enter minutes");
    scanf("%d",&minutes);
    hours = minutes / 60; //1
    minutes = minutes % 60;

    printf("hours = %d minutes = %d",hours,minutes);
}