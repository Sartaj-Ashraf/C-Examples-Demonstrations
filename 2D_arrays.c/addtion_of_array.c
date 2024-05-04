#include <stdio.h>

int main()
{
    int a[3], b[3];
    int i, sum;
    printf("Enter the elements of first array\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of scond array\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 3; i++)
    {
        sum = a[i] + b[i];
        printf("%d \t", sum);
    }
}