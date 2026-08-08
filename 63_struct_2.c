#include <stdio.h>
// create structure
struct Student
{
    // variables inside structure is called member variable
    // name, age, weight
    char name[30]; //array within structure
    int age;
    float weight;
};
#define SIZE 5
void main()
{
    // create array of structure
    struct Student s1[SIZE];
    int index = 0;
    while (index < SIZE)
    {
        printf("Enter %d student detail\n", index + 1);
        printf("Enter name");
        scanf("%s", &s1[index].name);

        fflush(stdin);

        printf("Enter age");
        scanf("%d", &s1[index].age);

        printf("Enter weight");
        scanf("%f", &s1[index].weight);
        index = index + 1;
    }
    printf("Name                             Age           Weight\n");
    for (index = 0; index < SIZE; index++)
    {
        printf("%-28s  %5d \t\t %2.f \n ", s1[index].name, s1[index].age, s1[index].weight);
    }
}