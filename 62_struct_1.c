#include <stdio.h>
// create structure
struct Student
{
    // variables inside structure is called member variable
    // name, age, weight
    char name[30];
    int age;
    float weight;
};
void main()
{
    struct Student s1;
    printf("Enter name");
    scanf("%s", &s1.name);

    fflush(stdin);
    
    printf("Enter age");
    scanf("%d", &s1.age);

    printf("Enter weight");
    scanf("%f", &s1.weight);

    printf("Name = %s, age = %d, weight = %2.f", s1.name, s1.age, s1.weight);
}