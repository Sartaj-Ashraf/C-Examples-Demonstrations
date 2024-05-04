#include <stdio.h>

int main()
{
    int n, arr[5], i;
    int *ptr;
    ptr = &arr[0];
    printf("Enter the elements of your array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &*ptr);
        i = i + 3;
    }
    for (i = 0; i < 5; i++)
    {
        printf("Elements are %d \t", *ptr);
    }
}