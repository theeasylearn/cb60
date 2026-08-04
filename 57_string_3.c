// write a program count no of words and letters in given string
// om namah shivay
// words = 3
#include <stdio.h>
#define SIZE 128
void main()
{
    // declare string(1d array of character)
    char line[SIZE];
    int word = 1, index = 0;
    printf("enter your name");
    gets(line); // without space janvi
    fflush(stdin);     //
    while (line[index] != '\0' && index < SIZE)
    {
        if (line[index] == ' ')
        {
            word = word + 1;
        }
        index = index + 1;
    }
    printf("words = %d \nno of letters %d",word,index);
}