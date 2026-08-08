#include <stdio.h>
// create union
union info
{
    char isMarried; // 1
    int child;      // 2
};

void main()
{
    union info i1;
    printf("Enter your martial status ");
    scanf("%c", &i1.isMarried);
    printf("is Married = %c", i1.isMarried);
    printf("No of child = %d", i1.child);

    printf("Enter your no of child ");
    scanf("%d", &i1.child);

    printf("is Married = %c", i1.isMarried);
    printf("No of child = %d", i1.child);
}