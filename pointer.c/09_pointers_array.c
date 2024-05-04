#include<stdio.h>
disp(int *n)
{
    printf("\n %d",*n);
}

int main()
{
    int i;
   int marks[]={55,65,75,85,95,45,65,76,87};
    for(i=0;i<=6;i++)
        disp(&marks[i]);
}

OUTPUT;

 55
 65
 75
 85
 95
 45
 65


