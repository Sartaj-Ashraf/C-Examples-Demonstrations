#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5},i;
    int *p=&a[0];
    printf("The value at %d index is : %d\n",0,*p);
    p=p+2;
    printf("The value at %d index is : %d ",2,*p);

}
OUTPUT:
The value at 0 index is : 1
The value at 2 index is : 3 