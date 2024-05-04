#include <stdio.h>

main()
{
    int a[2][3], i, j;
    printf("Enter the array elements\n");
    for (i = 0; i < 2; i++)  
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elemnts are as \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf(" Transpose of this matrix is as\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}