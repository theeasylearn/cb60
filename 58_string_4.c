// write a program convert upper case string into lower case string
// JAY SHREE KRISHNA
// jay shree krishna
#include <stdio.h>
#define SIZE 128
void main()
{
    // declare string(1d array of character)
    char line[SIZE];
    int index = 0, ascii;
    printf("Enter one line");
    gets(line);

    do
    {
        ascii = line[index]; // 65
        if(ascii>=65 && ascii<=90)
        {
            ascii = ascii + 32;  // 97
            line[index] = ascii;
        }
        index++;
    } while (line[index] != '\0' && index < SIZE);

    printf("%s", line);
}