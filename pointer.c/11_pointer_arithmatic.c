
Addtion of a number to a pointer:
#include<stdio.h>

int main()
{
    int i=4,*j,*k;
    j=&i;
    j=j+1;
    j=j+9;
    k=j+3;
    printf("value of i is  %d\n",i);
    printf("value of j is  %d\n",j);
    printf(" value a *j is %d\n",*j);
    printf(" value a k is  %d\n",k);
}

Subtraction of a number from a pointer;

#include<stdio.h>

int main()
{
    int i=4,*j,*k;
    j=&i;
    j=j-2;
    j=J-5;
    k=j-6;
    printf("value of i is  %d\n",i);
    printf("value of j is  %d\n",j);
    printf(" value a *j is %d\n",*j);
    printf(" value a k is  %d\n",k);

}