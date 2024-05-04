#include <stdio.h>

main()
{
    int marks;
    printf("enter marks");
    scanf("%d", &marks);
    if (marks > 80)
        printf("A grade");
    else if (marks > 70)
        printf(" B Grade");
    else if (marks > 60)
        printf(" C grade");
    else
        printf("D Grade");
}