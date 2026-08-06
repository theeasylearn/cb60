#include <stdio.h>
#include <string.h>
#define SIZE 128
void main()
{
    // declare string(1d array of character)
    char line[SIZE], reverse[SIZE];
    int i, r, length;
    printf("enter your name");
    gets(line);
    // fflush(stdin);     //
    length = strlen(line);
    printf("\n length = %d", length);
    r = length - 1; // r = reverse
    i = 0;          // i = index
    while(r>=0)
    {
        reverse[i] = line[r];
        i++; // 1
        r--; // 5
    }
    reverse[i] = '\0';
    printf("reverse %s",reverse);
}