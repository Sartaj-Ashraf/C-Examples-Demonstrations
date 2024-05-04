#include<stdio.h>

int main()
{
    int a=10;    // store 10 in Variable 'a'
    int *p=&a;    // Assign the value at address of 'a' to *p
    int **q=&p;   Assign the value of *p to **q;
    printf(" a=%d %d %d",a,*p,**q);

}