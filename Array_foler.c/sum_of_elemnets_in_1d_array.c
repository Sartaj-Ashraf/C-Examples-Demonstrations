#include <stdio.h>

int main()
{
    int a[4], b[4], c[4], i;
    printf("Enter the elements of first array\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elemnts of scond array\n");

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &b[i]);
    }

    printf(" Sum of two array's");
    for (i = 0; i < 4; i++)
    {
        c[i] = a[i] + b[i];
        printf(" %d\t", c[i]);
    }
   
}