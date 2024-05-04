#include <stdio.h>

main()
{
    int a[2][3], i, j, sum[2], k;
    printf("Enter the elements of 2D array\n");
    for (i = 0; i < 2; i++)

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf(" Matrix elements are : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (k = 2; k < 6; k++)
    {

        sum[k] = sum[k] * a[i][j];
        printf("%d\t", sum[k]);
    }
}