/*
    write a program to display day and night choghadiya of given day of week. (day must be between 1 to 7 )
*/
#include <stdio.h>
void main()
{
    int day;
    printf("enter day of week \n Press 1 for monday \n Press 2 for tuesday \n Press 3 for wednesday \n Press 4 for thursday \n Press 5 for friday \n Press 6 for saturday \n press 7 for sunday");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Day : Amrit, Kaal, Shubh, Rog, Udveg, Char, Labh, Amrit");
        printf("\n Night : Char, Rog, Labh, Shubh, Udveg, Amrit, Kaal, Char");
        break;

    case 2:
        printf("Day : Rog, Udveg, Char, Labh, Amrit, Kaal, Shubh, Rog");
        printf("\nNight : Kaal, Labh, Udveg, Shubh, Amrit, Char, Rog, Kaal");

        break;

    case 3:
        printf("Day : Labh, Amrit, Kaal, Shubh, Rog, Udveg, Char, Labh");
        printf("\nNight : Udveg, Shubh, Amrit, Char, Rog, Kaal, Labh, Udveg");
        break;

    case 4:
        printf("Day : Shubh, Rog, Udveg, Char, Labh, Amrit, Kaal, Shubh");
        printf("\nNight : Amrit, Char, Rog, Kaal, Labh, Shubh, Udveg, Amrit");
        break;

    case 5:
        printf("Day : Char, Labh, Amrit, Kaal, Shubh, Rog, Udveg, Char");
        printf("\nNight : Rog, Kaal, Labh, Udveg, Shubh, Amrit, Char, Rog");
        break;

    case 6:
        printf("Day : Kaal, Shubh, Rog, Udveg, Char, Labh, Amrit, Kaal");
        printf("\nNight : Labh, Udveg, Shubh, Amrit, Char, Rog, Kaal, Labh");
        break;

    case 7:
        printf("Day : Udveg, Char, Labh, Amrit, Kaal, Shubh, Rog, Udveg");
        printf("\nNight : Shubh, Amrit, Char, Rog, Kaal, Labh, Udveg, Shubh");
        break;
    default:
        printf("it is not valid day of week");
    }
}