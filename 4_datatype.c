#include<stdio.h>
void main()
{
    //variable declare 
    int a;
    unsigned int b;
    long c;
    unsigned long d;
    float e;
    char f;
    double g;

    printf("Enter value for f");
    scanf("%c",&f);

    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%u",&b);

    printf("enter value for c");
    scanf("%ld",&c);

    printf("enter value for d");
    scanf("%lu",&d);

    printf("enter value for e");
    scanf("%f",&e);

    printf("enter value for g");
    scanf("%lf",&g);

    printf("a = %d b =%u, c = %ld d = %lu e = %f g = %lf f = %c",a,b,c,d,e,g,f);
    
}