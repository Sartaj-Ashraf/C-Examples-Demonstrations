#include <stdio.h>

main()
{
    int a[2][3], i, j, sum = 0;

    printf("Enter the elements of array");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The elements of matrix are as");
    for (i = 0; i < 2; i++)
    {
        for (i = 0; i < 3; i++)
        {
            printf(" %d", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("n")
    }
    printf(" sum= %d", sum);
}