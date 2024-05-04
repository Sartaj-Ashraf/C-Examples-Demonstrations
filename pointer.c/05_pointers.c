#include<stdio.h>

int main()
{
    int a=10;
    int b=20;
    swapr(&a,&b);
    printf("\na=%d",a);
    printf("\nb=%d",b);
}
swapr(int *x,int *y)
{
    int t;
    t=*y;
    *x=*y;
    *y=t;
}

