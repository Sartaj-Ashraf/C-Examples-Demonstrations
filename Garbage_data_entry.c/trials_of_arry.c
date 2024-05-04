#include <stdio.h>

int main()
{     int i;
    int a[5] = {1, 2, 3, 4, 5, 6, 7};
    for (i = 0; i <= 5; i++)
    {
        printf(" the value of array is %d\n", a[i]);
    }

    for (i = 5; i <=0; i--)
    {
        printf(" the value of array is %d\n", a[i]);
    }
}