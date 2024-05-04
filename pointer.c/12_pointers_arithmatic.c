
#include<stdio.h>

int main()
{
    int num[]={23,45,64,34,65,34,45};
    int i=0,*j;
    j=&num[0];
    while(i<=5)
    {
        printf("\naddress=%u",&num[i]);
        printf("\t   ELements =%d",*j);
        i++;
        j++;
    }

}
OUTPUT:

address=6684192    ELements =23
address=6684196    ELements =45
address=6684200    ELements =64
address=6684204    ELements =34
address=6684208    ELements =65
address=6684212    ELements =34
