// write a convert 24 hours given time into 12 hours format time 
/*
    input : 15  output : 3 pm
    input : 18  output : 6 pm
    input : 21  output : 9 pm
    input : 10  output : 10 am
    input : 7  output : am am
*/
#include <stdio.h>
void main()
{
    int hours;
    printf("Enter hours in 24 format time");
    scanf("%d",&hours);

    if(hours<12)
    {
        printf("%d Am",hours);
    }

    if(hours>12) 
    {
        hours = hours - 12;
        printf("%d Pm",hours);
    }

}
