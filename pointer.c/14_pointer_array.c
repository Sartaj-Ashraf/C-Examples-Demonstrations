#include<stdio.h>

int main()
{
    int num[]={24,34,12,44,56,54};
    int i=0;
    while(i<=5)
    {
        printf("\nElements at index %d is %d",i,num[i]);
        printf("\t\t Address =%u",&num[i]);
        i++;
    }

}
OutPUT:
address=6684192    ELements =23
address=6684196    ELements =45
address=6684200    ELements =64
address=6684204    ELements =34
address=6684208    ELements =65
address=6684212    ELements =34