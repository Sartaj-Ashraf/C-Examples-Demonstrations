#include<stdio.h>
display(int m)
{
    printf("\n%d", m);
}
int main()
{
    int i;
    int marks[]={55,65,75,85,95,45,65,76,87};
    for(i=0;i<=6;i++)
    {
        display(marks[i]);
    }
}
OUTPUT:
55
65
75
85
95
45
65