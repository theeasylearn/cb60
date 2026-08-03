// write a program that accept name from and count & display vowels in it
// a e i o u
// name = aarohi
// vowel = 4
#include <stdio.h>
#define SIZE 32
#define SMALL_SIZE 8
void main()
{
    // declare string(1d array of character)
    char name[SIZE];
    int vowel = 0;
    printf("enter your name");
    scanf("%s", name); // without space janvi
    fflush(stdin);     //
    for (int index = 0; name[index] != '\0'; index++)
    {
        if (name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u')
        {
            vowel = vowel + 1;
        }
    }
    printf("vowels = %d",vowel);
}