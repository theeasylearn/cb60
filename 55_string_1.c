// write a program that accept name, city, pincode from user in string and display it 
#include <stdio.h>
#define SIZE 32
#define SMALL_SIZE 8
void main()
{
    //declare string(1d array of character)
    char name[SIZE],city[SIZE],pincode[SMALL_SIZE];
    printf("enter your name");
    scanf("%s",name); //without space 

    fflush(stdin); 
    printf("enter your city");
    gets(city); //can accept input with space 

    printf("Pincode");
    gets(pincode); 

    //display name,city,pincode
    printf("Name = %s \n",name);
    printf("city = %s \n pincode ",city);
    puts(pincode); //print pincode on screen
}