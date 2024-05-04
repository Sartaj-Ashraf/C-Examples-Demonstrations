#include<stdio.h>

int main()
{
    int i,arr[5],*ptr;
    ptr=&arr[0];
    printf("Enter the elements of your array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));
    }
    for ( i = 0; i <5; i++)
    {
        printf("%d",*(ptr+i));
    }
    
}

// OUTPUT:
//Enter the elements of your array
// 1
// 4
// 2
// 4
// 7
// 14247