#include<stdio.h>

int main()
{
    int a[5]={4,5,6,7,8};
    int i,*p;
    p=&a[0];
    for(i=0;i<5;i++,p++)
    {
        printf("The value at position %d is %d \n",i,*p);
    }
     for(i=0;i<5;i++,p++)
    {
        printf("The value at position %d is %d \n",i,p);
    }

}