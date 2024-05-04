#include<stdio.h>

int main()
{
    int i,arr[5],*p;
    p=&arr[0];
    printf("Enter the elements of your array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
     printf("Before adding 3 to elements\n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\nAfter adding 3 to elements\n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",*(p+i)=*(p+i)+3);
    }
} 
// }
// Enter the elements of your array
// 1
// 2
// 3
// 4
// 5
// Before adding 3 to elements
// 1       2       3       4       5
// After adding 3 to elements
// 4       5       6       7       8