// write a program to display ascii code and letters between A TO Z
#include <stdio.h>
void main()
{
    for (int num = 65; num <= 90; num++)
        printf("ascii = %d letter = %c \n", num, num);
}