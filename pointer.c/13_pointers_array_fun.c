#include<stdio.h>
display(int *j,int n)
{
    int i=1;
    while(i<=n)
    {
        printf("\n element =%d",*j);
        i++;
        j++;
    }
    
}

int main()
{
    int num[]={24,56,76,86,45,66,55};
    display(&num[0],6);
}

OUTPUT:
 element =24
 element =56
 element =76
 element =86
 element =45
 element =66