/*
    write a program to findout whether given letter is vowel or consonant 
    vowels = a e i o u 
    consonant = b c d f g h j k l m n p q r s t v w x y z 
*/
#include <stdio.h>
void main()
{
    char letter;
    printf("enter any one letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a': 
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("it is vowels");
        break;
        default:
        printf("it is not vowel, it may be consonant");
    }
}